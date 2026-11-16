#include<stdio.h>
#include<stdlib.h>
#define ADD(x, y) ((x) + (y))
#define SHOW(x) printf("%s\n", #x)
#define JOIN(a, b) a##b
int main()
{
    //ADD(10,20);
    printf("%d ",ADD(10,20));
    SHOW(3 + 5);
    int motor1 = 100;
    int motor2=200;
    printf("%d\n", JOIN(motor, 1));
    printf("%d\n", JOIN(motor, 2));
}