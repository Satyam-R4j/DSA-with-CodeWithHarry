// Video 56

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size)
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
    int temp;

    do
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partIndex;
        partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex - 1);
        quickSort(arr, partIndex + 1, high);
    }
}
int main(int argc, char const *argv[])
{
    // int a[] = {12, 3, 53, 23, 33,20,19,21,16};
    int a[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);
    printf("\nAfter sorting!!\n");
    quickSort(a, 0, size - 1);
    printArray(a, size);
    return 0;
}
