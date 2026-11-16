#include<stdio.h>
#include <string.h>
struct robot
{
    char id[20];
    float speed;
    float battery;
};
struct robot dogs[3];
void change_speed(struct robot *p, float speed)
{
    p->speed=speed;
}

int main()
{
    struct robot *p=dogs;
    struct robot *q=dogs;
    strcpy(p->id,"aaa");
    strcpy((p+1)->id,"bbb");
    strcpy((p+2)->id,"ccc");
    p->speed=15.0;
    (p+1)->speed=18.0;
    dogs[2].speed=5.0;
    dogs[0].battery=1.23;
    dogs[1].battery=3.45;
    dogs[2].battery=6.78;
    change_speed(dogs, 35.0);
    change_speed(dogs+1, 40);
    for(int i=0;i<3;i++)//i对于q来说是计数器的作用
    {
        printf("%s %f %.2f ",q->id,q->speed,q->battery);
        q++;
    }
}