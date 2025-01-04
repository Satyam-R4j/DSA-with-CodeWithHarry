// Video 55

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
        printf(" %d ", arr[i]);
    }
}

void selectionSort(int *arr, int size)
{
    int minIndex;

    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(&arr[i],&arr[minIndex]);
        
        
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {12, 3, 53, 23, 33};
    // int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("the size is %d\n", size);
    printArray(a, size);
    printf("\nAfter sorting!!\n");
    selectionSort(a, size); 
    printArray(a, size);
    return 0;
}
