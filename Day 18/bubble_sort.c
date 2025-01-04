// Video 51

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("the element on index %d is %d\n", i, arr[i]);
    }
}

void bubbleSort(int *arr, int size)
{
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        isSorted = 1;
        printf("working on pass %d \n", i+1);
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    // int a[] = {12, 3, 53, 23, 33};
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("the size is %d\n", size);
    printArray(a, size);
    bubbleSort(a, size);
    printArray(a, size);
    return 0;
}
