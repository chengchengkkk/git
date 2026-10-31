#include <stdio.h>
int max_of_two(int a,int b)
{
    int s;
    if (a>b)
    {
        s=a;

    }else{
        s=b;
    }
    return s;
}
int main()
{
    max_of_two(3, 5);	
    max_of_two(9, 2);	
    max_of_two(4, 4);
    printf("%d\n%d\n%d\n",max_of_two(3, 5),max_of_two(9, 2),max_of_two(4, 4));
}