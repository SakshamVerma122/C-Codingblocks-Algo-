#include <stdio.h>
#include <stdlib.h>
struct priceWeight
{
     int price;
     int weight;
     float pwRatio;
     int index;
} void Ratiosort(struct priceWeight *arr, int num)
{
     for (int i = 1; i < size; i++)
     {
          while (arr[i - 1].pwRatio < arr[i].pwRatio && i > 0)
          {
               struct priceWeight swap;
               swap = arr[i - 1];
               arr[i - 1] = arr[i];
               arr[i] = swap;
          }
     }
}
void fractionKnapsack(struct priceWeight *arr, int num, int maxWeight)
{
     float *arr1 = (float *)(calloc(num, sizeof(int)));
     int i = 0;
     while (maxWeight > 0)
     {
          maxWeight -= arr[i].weight;
          if (maxWeight >= 0)
          {
               arr1[arr[i].index] = 1.0;
          }
          else
          {
               arr1[arr[i].index] = ((maxWeight + arr[i].weight) / arr[i].weight);
          }
          i++;
     }
     for (i = 0; i < num; i++)
     {
          if (i < num - 1)
               printf("%.1f ", arr1[i]);
          elseprintf("%.1f", arr1[i]);
     }
}
int main()
{
     int maxWeight, num;
     scanf("%d%d", &maxWeight, &num);
     struct priceWeight *arr = (struct priceWeight *)malloc(sizeof(struct priceWeight) * num);
     for (int i = 0; i < num; i++)
     {
          scanf("%d", &(arr[i].weight));
          arr[i].index = i;
     }
     for (int i = 0; i < num; i++)
     {
          scanf("%d", &(arr[i].price));
          arr[i].pwRatio = float(price) / weight;
     }
     Ratiosort(arr, num);
     fractionKnapsack(arr, num);
     return 0;
}