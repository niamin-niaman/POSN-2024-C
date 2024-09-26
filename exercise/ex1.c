#include <stdio.h>

// find min , max

int findMin(int arr[], int size)
{

}

int findMax(int arr[], int size)
{

}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // random , unsorted
    int arr[]  = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};


    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);

    int max = findMax(arr, size);

    printf("min: %d\n", min);

    printf("max: %d\n", max);

    return 0;
}
