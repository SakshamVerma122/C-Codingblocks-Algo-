#include <stdio.h>
#include <stdlib.h>
struct min_datatype
{
    int val;
    int index;
};
struct max_datatype
{
    int val;
    int index;
};
struct min_max_storage
{
    struct min_datatype min;
    struct max_datatype max;
};
struct min_max_storage findMinMax(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    struct min_max_storage compare1, compare2, finalReturn;
    
    // The first 2 conditions is for the end nodes handling
    if (start == end)
    {
        finalReturn.max.val = arr[start];
        finalReturn.max.index = start;
        finalReturn.min.val = arr[end];
        finalReturn.max.index = end;
        return finalReturn;
    }
    
    if (end == start + 1)
    {
        if (arr[end] > arr[start])
        {
            finalReturn.max.val = arr[end];
            finalReturn.max.index = end;
            finalReturn.min.val = arr[start];
            finalReturn.min.index = start;
        }
        else
        {
            finalReturn.max.val = arr[start];
            finalReturn.min.val = arr[end];
            finalReturn.max.index = start;
            finalReturn.min.index = end;
        }
        return finalReturn;
    }
    
        // this condition is for handling other node which excludes the end nodes
        compare1 = findMinMax(arr, start, mid);
        compare2 = findMinMax(arr, mid + 1, end);
        
        if (compare1.max.val > compare2.max.val)
        {
            finalReturn.max.val = compare1.max.val;
            finalReturn.max.index = compare1.max.index;
        }
        else
        {
            finalReturn.max.val = compare2.max.val;
            finalReturn.max.index = compare2.max.index;
        }

        if (compare1.min.val < compare2.min.val)
        {
            finalReturn.min.val = compare1.min.val;
            finalReturn.min.index = compare1.min.index;
        }
        else
        {
            finalReturn.min.val = compare2.min.val;
            finalReturn.min.index = compare2.min.index;
        }
        return finalReturn;
    }

int main()
{
    int num;
    scanf("%d", &num);
    int *arr = (int *)malloc(num * sizeof(int));
    for (int iter = 0; iter < num; iter++)
    {
        scanf("%d", &(arr[iter]));
    }
    struct min_max_storage finalSoln = findMinMax(arr, 0, (num-1));
    printf("Winner %d\n", finalSoln.max.index + 1);
    printf("Worst player %d", finalSoln.min.index + 1);
}