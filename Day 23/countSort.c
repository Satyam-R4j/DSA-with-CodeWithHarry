// Video 60

#include <stdio.h>
#include <limits.h>

#include <stdlib.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int maximum(int arr[], int size)
{
    int max = INT_MIN;
    printf("the max is %d", max);
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            printf("the max is %d", max);
        }
    }

    return max;
}

void countSort(int *arr, int size)
{
    int max = maximum(arr, size);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    int i, j;

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        printf("  cont is %d  ",arr[i]);
        count[arr[i]] = count[arr[i]] + 1;
    }

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
    // int a[] = {12, 3, 53, 23, 33};
    int a[] = {3, 5, 2, 13,45, 12, 3, 2, 13 };
    // int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("the size is %d\n", size);
    printArray(a, size);
    printf("\nAfter sorting!!\n");
    countSort(&a, size);
    printf("\n");
    printArray(a, size);
    return 0;
}
