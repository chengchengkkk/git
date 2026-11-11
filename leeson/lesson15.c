#include<stdio.h>
int factorial(int n)
{
    if(n==0){
        return 1;

    }else{
        return n*factorial(n-1);
    }

    // 自己完成
}
int main()
{
    printf("%d\n",factorial(5));
}