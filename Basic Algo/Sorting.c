#include <stdio.h>

void Swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

void PrintArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[j + 1])
                Swap(arr, j, j + 1);
        }
    }
}

void SelectionSort(int arr[], int len)
{
    int small = 0;
    for (int i = 0; i < len; i++)
    {
        PrintArray(arr, len);
        for (int j = i; j < len; j++)
        {
            if (arr[j] < arr[small])
                small = j;
        }
        Swap(arr, i, small);
    }
}

void Insertionsort(int arr[], int len)
{
    int j;
    for (int i = 1; i < len; i++)
    {
        j = i;
        while (j != 0)
        {
            PrintArray(arr, len);
            if (arr[j] < arr[j - 1])
                Swap(arr, j, j - 1);
            j--;
        }
    }
}

int Partition(int arr[], int start, int end)
{
    int p = start;
    int b = start + 1;
    int s = end;

    do
    {
        while (arr[b] <= arr[p] && b < end)
        {
            b++;
        }

        while (arr[s] > arr[p] && s > start)
        {
            s--;
        }

        if (b < s)
        {
            Swap(arr, b, s);
        }

    } while (b < s);
    printf("s=%d b=%d p=%d\n", s, b, p);
    Swap(arr, p, s);
    return s;
}

void QuickSort(int arr[], int start, int end, int len)
{
    int PIndex;
    PrintArray(arr, len);

    if (start < end)
    {
        PIndex = Partition(arr, start, end);
        QuickSort(arr, start, PIndex - 1, len);
        QuickSort(arr, PIndex + 1, end, len);
    }
}

void Merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int r[end + 1];

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            r[k] = arr[i];
            i++, k++;
        }
        else
        {
            r[k] = arr[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        r[k] = arr[i];
        i++, k++;
    }
    while (j <= end)
    {
        r[k] = arr[j];
        j++, k++;
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = r[i];
    }
}

void MergeSort(int arr[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);
        Merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {3, 6, 2, 6, 1, 5, 4, 0, 4, 2, 0, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    // PrintArray(arr, len);
    // BubbleSort(arr, len);
    // SelectionSort(arr, len);
    // Insertionsort(arr,  len);
    QuickSort(arr, 0, len - 1, len);
    // MergeSort(arr, 0, len - 1);
    PrintArray(arr, len);

    return 0;
}