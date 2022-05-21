class vaccination_camp extends Thread
{
    static int injection=0;
    static int coavccine_injection=30;
    synchronized public void run()
    {
        injection++;
        System.out.println("Covaccine consumed:"+coavccine_injection);
        System.out.println("Covaccine consumed before 10:"+coavccine_injection);
        System.out.println("Thread_currently in run():"+Thread.currentThread().getName());
        if(injection%10==0)
        {
            coavccine_injection = coavccine_injection-injection;
            injection=0;
        }
    }
}
public class Test
{
    public static void main(String[] args) 
    {
        vaccination_camp counter_1 = new vaccination_camp();
        vaccination_camp counter_2 = new vaccination_camp();
        vaccination_camp counter_3 = new vaccination_camp();

        
            counter_1.start();
            counter_2.start();
            counter_3.start();
        
    }
}