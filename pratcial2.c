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

int InsertionSort(int *arr, int len)
{
    int temp = arr[0];
    for (int i = 1; i <= len; i++)
    {
        printArray(arr, len);
        for (int j = i - 1; j >= 0 || arr[j] > temp; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int createArray(int *arr, int len)
{
    printf("\nEnter your array elem in one line\n>> ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}

int main()
{
    int UserInput, len;
    printf("Enter the lenght of array\n");
    scanf("%d", &len);
    int arr[len];
    createArray(arr, len);

    printf("\nSelect the sorting\n1 for Bubble Sort\n2 for Selection Sort\n3 for Insertion Sort\n>> ");
    scanf("%d", &UserInput);

    printf("\nYour Enter array is\n");
    printArray(arr, len);
    printf("\nSorting...\n");
    switch (UserInput)
    {
    case 1:
        BubbleSort(arr, len);
        break;
    case 2:
        SelectionSort(arr, len);
        break;
    case 3:
        InsertionSort(arr, len);
    default:
        break;
    }

    BubbleSort(arr, len);
    printf("\nArray after Sorting\n");
    printArray(arr, len);

    return 0;
}