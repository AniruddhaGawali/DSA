#include <stdio.h>

int LinearSearch(int *arr, int key)
{
    for (int i = 0; i <= sizeof(arr); i++)
        if (arr[i] == key)
            return i + 1;
    return 0;
}

int BianarySearch(int *arr, int key, int len)
{
    int start = 0, end = len;

    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else
        {
            if (arr[mid] > key)
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
    }
    return 0;
}

void Sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // menu
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    

    return 0;
}