#include <stdio.h>
int sum_array(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    sum_array(arr,6);
    printf("和为%d\n",sum_array(arr,6));
}