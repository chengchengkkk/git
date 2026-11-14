#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("请输入数组长度：");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
{
    printf("Invalid length\n");
    return 1;
}
    int *p= malloc(n * sizeof(int));
    if (p == NULL)
{
    printf("Memory allocation failed\n");
    return 1;
}
    for(int i=0;i<n;i++)
    p[i]=(i+1)*10;
    for(int i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
    free(p);
}