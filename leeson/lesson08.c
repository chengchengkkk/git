#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int (*p)(int a,int b)=add;
    printf("%d",p(5,3));
}
//函数指针，本质上是指针，指向的函数的指针，函数的地址可以用函数名代替，同样的用法还有字符串