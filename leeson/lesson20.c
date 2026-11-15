#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = calloc(5, sizeof(int));
    if (p==NULL){
        free(p);
        return 1;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;

}