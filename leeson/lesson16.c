#include <stdio.h>
void hanoi(int n, char from, char via, char to)
{
    if (n == 1)
    {
        printf("%c to %c\n",from,to);// 只有一个圆盘，直接打印移动步骤
        return;
    }

    hanoi(n-1,from,to,via);// 第一步：移动上面的 n-1 个圆盘

    printf("%c->%c\n",from,to);   // 第二步：移动最大的圆盘

    hanoi(n-1,via,from,to);   // 第三步：把 n-1 个圆盘移到目标柱
}

int main(void)
{
    
    //hanoi(3,'A','B','C');  这是第一种写法，直接传入字符值
    // 调用 hanoi，移动3个圆盘，下面是第二种写法，先创建变量a,b,c再把字符值传入
    char a = 'A';
    char b = 'B';
    char c = 'C';

    hanoi(3, a, b, c);

    return 0;
}