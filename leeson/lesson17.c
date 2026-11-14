#include<stdio.h>
void swap(int *p, int *q)
{
    int temp=*q;
     *q=*p;
     *p=temp;
}
void partition_demo(int arr[], int n)
{
    int pivot=arr[0];//int pivot=6;
    /*for(int i=0;i<n;i++)
    {
        if (arr[i]==6){
            printf("数组里面为6的数字是第%d\n个",i);
            pivot=arr[i];
        }   
    } */
    for(int i=0;i<n;i++)
    {
        if (arr[i] < pivot)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[] = {6, 3, 9, 2, 8, 1};
    partition_demo(arr,6);
    printf("\n");
    swap(&arr[0], &arr[5]);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}