// Video 59

#include <stdio.h>
#include <conio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k, B[500];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void mergeSort(int Arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(Arr, low, mid);
        mergeSort(Arr, mid + 1, high);
        merge(Arr,low , mid, high);
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
    mergeSort(a, 0, size-1);
    printf("\n");
    printArray(a, size);
    return 0;
}
