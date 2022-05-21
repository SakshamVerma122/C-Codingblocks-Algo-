#include <stdio.h>
#include <stdlib.h>
void Insertion_sort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        while (arr[i - 1] > arr[i] && i > 0)
        {
            arr[i - 1] = arr[i - 1] + arr[i];
            arr[i] = arr[i - 1] - arr[i];
            arr[i - 1] = arr[i - 1] - arr[i];
            i--;
        }
    }
}
int arr_reg[100000], coin_total = 0;
;
int *Find_coindenomination(int *arr, int size)
{
    int money;
    scanf("%d", &money);
    int pointer = size - 1;
    while (money > 0)
    {
        if (arr[pointer] <= money)
        {
            money -= arr[pointer];
            arr_reg[coin_total] = arr[pointer];
            coin_total += 1;
        }
        else
        pointer--;

    }
    return arr_reg;
}
int main()
{
    int num;
    scanf("%d", &num);
    int *ptr = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &(ptr[i]));
    }
    Insertion_sort(ptr, num);
    int *ptr1 = Find_coindenomination(ptr, num);
    printf("%d\n", coin_total);
    int i;
    for (i = 0; i < coin_total - 1; i++)
    {
        printf("%d+", ptr1[i]);
    }
    printf("%d", ptr1[i]);
    return 0;
}
