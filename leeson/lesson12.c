#include<stdio.h>

static int action_count=0;
void record_action(void)
{
    action_count=action_count+1;

}
void show_count(void)
{
    printf("action_count=%d\n",action_count);

}
int main(void)
{
    record_action();
    record_action();
    record_action();
    show_count();
}