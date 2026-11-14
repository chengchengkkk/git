#include<stdio.h>
void swap(int *p, int *q)
{
    int temp=*q;
     *q=*p;
     *p=temp;
}
int partition_demo(int arr[], int n)
{
    int pivot=arr[0];//int pivot=6;
    int boundary=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < pivot)
        {
            boundary++;// 思考：应该交换哪两个数组元素？// 调用你自己写的 swap() 
            swap(&arr[i],&arr[boundary]);
        }  
    }
    swap(&arr[boundary],&arr[0]);
    printf("boundary = %d\n", boundary);// 思考：扫描结束后，// 如何把 arr[0] 的基准值放到 boundary 的位置？
    return boundary;
 }//已第一个数字分割两边，左边比他小，右边比他大，此时左边，右边均为排序
void quick_sort(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }
    int pos = partition_demo(arr, n);// 下一步：递归排序左边的部分，在下面是排右边的
    quick_sort(arr, pos);
    quick_sort(arr+pos+1,n-pos-1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    quick_sort(arr,6);
    // int pos = partition_demo(arr, 6);
    printf("\n");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    //printf("pivot index = %d\n", pos);
    
}