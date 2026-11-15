#include<stdio.h>
#include<stdlib.h>
int score = 10;
int main()
{
    int a = 20;
    int *p = malloc(sizeof(int));
    if(p==NULL){
        return 1;
    }
    *p = 30;
    printf("a address = %p\n", (void *)&a);
    printf("score address = %p\n", (void *)&score);
    printf("p address = %p\n", (void *)&p);
    printf("p指向动态内存的 address = %p\n", (void *)p);
    printf("*p = %d\n", *p);
    free(p);
    p = NULL;
    
}