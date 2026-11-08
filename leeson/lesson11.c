/*   #include <stdio.h>

int score = 50;

void bonus(void)
{
    extern int score;
    score = score + 10;
}

int main(void)
{
    bonus();
    printf("%d\n", score);
    return 0;
}
//extern 外部的相当于这句话可以删掉，作用一致*/

#include<stdio.h>
int score=50;
void add_point(void)
{
    extern int score;
    score=score+5;
    printf("score=%d\n",score);
}
int main()
{
    add_point();
    add_point();
    add_point();
    printf("score=%d",score);

}
//extern 的作用是声明一个在其他地方定义的变量，而不是赋予函数访问全局变量的特殊能力。
//真正需要 extern 的情况：变量定义在另一个 .c 文件里