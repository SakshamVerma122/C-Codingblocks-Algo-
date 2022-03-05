#include<stdio.h>
struct weightValue
{
    int weight;
    int value;
    int index;
}
int func(int ind,int wt_left){
    func(ind-1,wt_left);

    // Choose item at the 
    func(ind-1,wt_left-wt[ind]+val[ind])
}

void main()
{
    int num,W;
    scanf("%d%d",&num,&W);

    struct weightValue *arr = (struct weightValue *)(malloc(sizeof(struct weightValue)*num));

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i].weight);
        arr[i].index = i;
    }
    
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i].value);
    }

    cout<<fun(n-1,w);
}