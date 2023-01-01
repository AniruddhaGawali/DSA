#include <stdio.h>

int LinearSearch(int arr[], int key, int len)
{
    // printf("%d\n", len);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return 0;
}

int BinarySearch(int arr[], int key, int lastIndex, int startIndex)
{
    int start = startIndex, end = lastIndex;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6}, key = 4;

    // int isFound = LinearSearch(arr, key, sizeof(arr) / sizeof(arr[0]));
    int isFound = BinarySearch(arr, key, (sizeof(arr) / sizeof(arr[0]) - 1), 0);

    if (isFound != 0)
    {
        printf("%d\n", isFound);
    }
    else
    {
        printf("key dont found\n");
    }

    return 0;
}