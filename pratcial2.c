#include<stdio.h>

int BubbleSort(int *arr,int len)
{
    for(int i =0; i<len;i++)
    {
        for(int j =0;j<len-1;j++)
        {
            if(arr[j]>arr[j+1]){
                 int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}


int SelectionSort()
{
    
    return 0;
}


int printArray(int * arr, int len)
{
    for(int i =0;i<len;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}


int main()
{

    int arr[]={7,3,6,2,1,5};
    printArray(arr, sizeof(arr)/4);
    BubbleSort(arr,sizeof(arr)/4);
    printf("\n\n");
    printArray(arr, sizeof(arr)/4);

    
    return 0;
}