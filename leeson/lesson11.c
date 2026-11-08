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