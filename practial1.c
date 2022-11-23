#include <stdio.h>

int LinearSearch(int *arr, int key)
{
    for (int i = 0; i <= sizeof(arr); i++)
        if (arr[i] == key)
            return i + 1;
    return 0;
}

int BinarySearch(int *arr,int key){
    
    return 0;
}

int main()
{
    // menu
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("\n%d\n",LinearSearch(arr, 1));

    return 0;
}