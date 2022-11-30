#include <stdio.h>

int LinearSearch(int *arr, int key)
{
    for (int i = 0; i <= sizeof(arr); i++)
        if (arr[i] == key)
            return i + 1;
    return 0;
}

int BinarySearch(int *arr, int key, int len)
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
    for (int i = 0; i <    int len ;
    scanf("")
    int arr[len]; len; i++)
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

    int userInput, key, ans;

    printf("Enter 1 for Linear Search \n Enter 2 for BinarySearch\n>> ");
    scanf("%d", &userInput);

    printf("\nEnter the ey to find >> ");
    scanf("%d", &key);

    switch (userInput)
    {
    case 1:
        ans = LinearSearch(arr, key);
        break;

    default:
        Sort(arr, sizeof(arr) / 4);
        ans = BinarySearch(arr, key, sizeof(arr) / 4);
        break;
    }

    printf("\nkey:%d is find at %d\n", key, ans);

    return 0;
}