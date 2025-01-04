// Video 53

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

void insertionSort(int *arr, int size)
{
    int key, j;

    for (int i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {12, 3, 53, 23, 33};
    // int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("the size is %d\n", size);
    printArray(a, size);
    printf("After sorting!!\n");
    insertionSort(a, size); 
    printArray(a, size);
    return 0;
}
