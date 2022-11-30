#include<stdio.h>

int BubbleSort(int *arr,int len)
{
    int temp;
    for(int i =0; i<len;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i]= temp;
            }
        }
    }
    return 0;
}

int printArray(int * arr, int len)
{
    for(int i =0;i<len;i++)
        printf("%d\t",arr[i]);
    return 0;
}



int main()
{

    int arr[]={7,3,6,2,1,5};
    printArray(arr, sizeof(arr)/4);
    BubbleSort(arr,sizeof(arr)/4);

    
    return 0;
}