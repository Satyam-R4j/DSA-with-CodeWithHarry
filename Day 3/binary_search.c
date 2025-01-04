#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, high;
    low = 0;
    high = size -1;
    printf("high is %d\n", high);


    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {0,2, 3, 4, 5, 6, 7, 8, 99, 100};

    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 0;
    int result = binarySearch(arr, size, element);
    printf("result is %d", result);
    return 0;
}