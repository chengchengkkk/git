#include<stdio.h>
#include <string.h>
#include<stddef.h>
struct robot
{
    char id[20];
    float speed;
    float battery;
    struct robot *next;
    
};
int count_robots(struct robot *head)
{
    struct robot *p=head;
    int count = 0;
    while (p != NULL)
    {   
        count++;
        p = p->next;
    }// 你自己完成这里
    return count;
}
float average_speed(struct robot *head)
{
    float total_speed=0;
    struct robot *p=head;
    int count = 0;
    while (p != NULL)
    {   
        total_speed += p->speed;
        count++;
        p = p->next;
    }// 你自己完成这里
    if(count==0)
    {
        return 0.0f;
    }
    printf("%f",total_speed / count);
    return total_speed / count;
}
struct robot dogs[]=
{
    {"aaa", 15.0f, 80.0f, NULL},
    {"bbb", 18.0f, 90.0f, NULL}
};
struct robot *a = &dogs[0];
struct robot *b = &dogs[1];
struct robot c = {"ccc", 15.0f, 80.0f, NULL};
struct robot d = {"ddd", 18.0f, 90.0f, NULL};
int main()
{
    a->next=b;//在c语言里面a->next==(*a).next前提是a是一个指针变量
    (*a).next=b;
    b->next=&c;
    c.next=&d;
    b->speed=25.0f;
    printf("%s %.2f\n",(*a).next->id,(*a).next->speed);
    printf("%s %.2f\n",(a->next)->id,a->next->speed);
    printf("%s %.2f\n",(*(a->next)).id,a->next->speed);
    printf("%s %.2f\n",c.next->id,c.next->speed);
    struct robot *head = &dogs[0];
    /*printf("%s\n", head->id);
    printf("%s\n", head->next->id);
    printf("%s\n", head->next->next->id);
    printf("%s\n", head->next->next->next->id);*/
    struct robot *p = head;
    int count=0;
    float total_speed = 0;
    printf("机器狗数量：%d\n", count_robots(head));
    printf("机器狗数量：%d\n", count_robots(NULL));
    printf("%.2f\n", average_speed(head));
    printf("%.2f\n", average_speed(NULL));
   /* while (p!=NULL)
    {
        printf("%s %f %.1f\n", p->id,p->speed,p->battery);//.1f,.2f保留1位2位小数
        
        count++;
        total_speed += p->speed;
        p=p->next;
    }
    if(count>0)
    {
        printf("%d\n", count);
        printf("%f\n", total_speed/count);
    }*/
    return 0;
}
