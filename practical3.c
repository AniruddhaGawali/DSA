#include<stdio.h>

void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[],int start,int mid,int end){
     int start1= start,start2= mid+1, result[end],i=0;

    printf("\nWorking\n");
     while(start1 <=mid && start2<=end){
        printArray(result,end);
        if(arr[start1]>arr[start2]){
            result[i]=arr[start2];
            start2++;
            i++;
        }
        else{
             result[i]=arr[start1];
              start1++;
            i++;
        }
        }

    while (start1 <=mid )
    {
        result[i]=arr[start1];
              start1++;
            i++;
    }

    while (start2 <=end )
    {
        result[i]=arr[start2];
              start2++;
            i++;
    }
    printf("\nfinal:");
    printArray(result,end); 
}

    



int main()
{
    int arr[] = {1,3,2,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("given:");
    printArray(arr, size);
    merge(arr,0,1,4);

    return 0;
}