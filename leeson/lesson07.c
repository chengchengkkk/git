#include <stdio.h>
void swap(int *p, int *q)
{
    int temp=*q;
    *q=*p;
    *p=temp;

    // 你独立完成
}
int main()
{
    int a = 10;
    int b = 20;
    swap(&a,&b);
    printf("%d%d",a,b);
}