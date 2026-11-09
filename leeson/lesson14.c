/*#include <stdio.h>
int sum=0;
int sum_to_n(int n)
{
  
    if(n==0){
        return sum;
    }else{
        printf("输入的n值为%d\n",n);
        sum=sum+n;
        printf("此时sum值为%d\n",sum);
        sum_to_n(n-1); 
    }   
         printf("最后的和为%d",sum);
    // 自己实现
}  
int main(void)
{
    sum_to_n(5);
    
    return 0;
}*/
#include<stdio.h>
int sum_to_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_to_n(n-1);
    }   
}
int main()
{
    printf("%d\n",sum_to_n(5));
    
}