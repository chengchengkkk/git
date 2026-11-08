#include <stdio.h>
int *get_larger(int *a, int *b)   //指针函数，函数的返回值是指针
{
    // 自己完成
    if (*a>*b)
    {
        return a;

    }else{
        return b;
    }
}
int main()
{
    int x = 10;
    int y = 20;
    int *p=get_larger(&x,&y);
    *p = 99;
    printf("%d\n",*p);
    printf("%d\n%d\n",x,y);
}