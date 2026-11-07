#include <stdio.h> 
void counter(void)
{
   static int count = 0;
   count=count+1;
    printf("count=%d",count);
}


int main(void)
{
    counter();
    counter();
    counter();
    counter();
    counter();
    return 0;
}