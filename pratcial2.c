#include <stdio.h>

int printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

int BubbleSort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printArray(arr, len);
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int SelectionSort(int *arr, int len)
{
    int min, temp;
    for (int i = 0; i < len; i++)
    {
        min = i;
        printArray(arr, len);
        for (int j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    return 0;
}

int InserctionSort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        //printArray(arr, 6);
        for (int j = i + 1; j >= 0; j--)
        {
            if (arr[j-1] > arr[j])
            {
                printArray(arr, 6);
                int temp =0;
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                printArray(arr, 6);
            }
        }
    }

    return 0;
}

int main()
{

    int arr[] = {7, 3, 6, 2, 1, 5};
    InserctionSort(arr, sizeof(arr) / 4);

    return 0;
}