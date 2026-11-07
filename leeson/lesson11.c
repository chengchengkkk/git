#include <stdio.h>

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