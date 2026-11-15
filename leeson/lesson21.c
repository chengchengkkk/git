#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));

    if (p == NULL)
    {
        return 1;
    }

    *p = 100;

    int *q = p;

    *q=200;// 第一步：通过 q 把整数修改为200

    printf("%d ",*p);// 第二步：通过 p 打印修改后的值

    free(p);// 第三步：释放动态内存，只能释放一次

    p=q=NULL;// 第四步：将 p 和 q 都设置为 NULL

    return 0;
}