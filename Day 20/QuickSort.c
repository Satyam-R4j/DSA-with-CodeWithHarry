// Video 56

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

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }

    } while (i < j);
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        printf("\n");
        // printArray(arr, 9);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    // int a[] = {12, 3, 53, 23, 33};
    int a[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("the size is %d\n", size);
    printArray(a, size);
    printf("\nAfter sorting!!\n");
    quickSort(a, 0, size - 1);
    printf("\n");
    printArray(a, size);
    return 0;
}
