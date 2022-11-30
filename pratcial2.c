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





int main()
{

    int arr[] = {7, 3, 6, 2, 1, 5};
    SelectionSort(arr, sizeof(arr) / 4);
    printf("\n\n");
    int arr1[] = {7, 3, 6, 2, 1, 5};
    BubbleSort(arr1, sizeof(arr1) / 4);

    return 0;
}