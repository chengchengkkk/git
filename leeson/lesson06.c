#include <stdio.h>
void double_value(int *p)
{
    // 由你独立完成
    *p=(*p)*2;
}
int main()
{
    int a=7;
    double_value(&a);
    printf("%d\n",a);
}