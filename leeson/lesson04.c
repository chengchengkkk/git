#include <stdio.h>
int max_array(int arr[],int n)
{

    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int data[]={12, 28, 9, 35, 17, 66, 88};
    
    printf("最大的数是%d\n",max_array(data,sizeof(data)/sizeof(data[0])));

}