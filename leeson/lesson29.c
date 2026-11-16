#include<stdio.h>
#include <string.h>
struct robot
{
    char id[20];
    float speed;
    float battery;
};
struct robot dogs[3];
struct robot change_speed_copy(struct robot dog,float speed)
{
    dog.speed=speed;
    return dog;
}
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

    struct robot temp;
    temp = change_speed_copy(dogs[1], 40.0);
    printf("%f %f\n",dogs[1].speed,temp.speed);

    dogs[1]=change_speed_copy(dogs[1], 40.0);
    printf("%s %f %.2f ",dogs[1].id,dogs[1].speed,dogs[1].battery);
    change_speed(dogs+1,50);
    printf("%s %f %.2f ",(q+1)->id,(q+1)->speed,(q+1)->battery);
    
}
