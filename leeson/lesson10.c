#include <stdio.h> 
int count=10;
void counter(void)
{
   static int count = 0;
   count=count+1;
    printf("count=%d",count);
}
//static 静态的，相当于在这个函数里面执行static指令，同时每次调用后，static定义的变量
//保留上一次执行的值

int main(void)
{
    counter();
    counter();
    counter();
    counter();
    counter();
    return 0;
}