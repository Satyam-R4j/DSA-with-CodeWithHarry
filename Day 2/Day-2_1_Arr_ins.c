// video 10

#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 4};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 4;
    int element = 12;
    int index = 2;
    display(arr, size);
    indInsertion(arr, size, element, capacity, index);
    display(arr, 5);
    return 0;
}
