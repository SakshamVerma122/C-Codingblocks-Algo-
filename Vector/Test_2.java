import java.lang.Thread;
import java.lang.Math;

class Vaccine
{
    public static float Vaccine_available=30;
    void Vaccine_sold(String s)
    {
        Vaccine_available--;
        if (Vaccine_available%10==0)
        {
            System.out.println("Vaccine left:"+Vaccine_available);
        }
        else
        {
            
            System.out.println("Vaccine left:"+(Math.ceil(Vaccine_available/10)*10));
        }
    }
}
class Vaccine_counter extends Vaccine implements Runnable
{
    String threadname;
    Vaccine obj;
    Thread t;
    
 
    Vaccine_counter(Vaccine t1,String counter_name)
    {    
        
        obj=t1;
        this.threadname=counter_name;
        t=new Thread(this,threadname);
        System.out.println("THREAD CREATED");
        t.start();
 
    }
 
    public void run()
    {
        try
        {
           while(Vaccine_available>0) 
           {
                Thread.sleep(1000);
                synchronized(obj)// This is done so that when one thread is dealing eith ticket_available no other thread will interfere
                {
                    if(Vaccine_available>0)
                    {
                        obj.Vaccine_sold(threadname);
                        System.out.println("Vaccine injected by:"+threadname);
                        Thread.sleep(1000);
                    }
                }
           }
        }
        catch(InterruptedException e)
        {
            System.out.println("Thread "+threadname+" Interrupted");
        }
    }
}
 
public class Test_2
{
    public static void main(String[] args) throws InterruptedException 
    {
        Vaccine obj=new Vaccine();
 
        Vaccine_counter counter1=new Vaccine_counter(obj,"Counter 1");
        Vaccine_counter counter2=new Vaccine_counter(obj,"Counter 2");
        Vaccine_counter counter3=new Vaccine_counter(obj,"Counter 3");        
        
        counter1.t.join();
        counter2.t.join();
        counter3.t.join(); 
 
    }    
}
