// video 11

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

void indDeletion(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 4};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 4;
    int element = 12;
    int index = 3;
    display(arr, size);
    indDeletion(arr, size, index);
    display(arr, size -1 );
    return 0;
}

