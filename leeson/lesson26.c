#include<stdio.h>
#include <string.h>
struct robot
{
    char id[20];
    float speed;
    float battery;
};
struct robot dogs[3];
int main()
{
    strcpy(dogs[0].id,"aaa");
    strcpy(dogs[1].id,"bbb");
    strcpy(dogs[2].id,"ccc");
    dogs[0].speed=15.0;
    dogs[1].speed=18.0;
    dogs[2].speed=5.0;
    dogs[0].battery=1.23;
    dogs[1].battery=3.45;
    dogs[2].battery=6.78;
    for(int i=0;i<3;i++)
    {
        printf("%s %f %.2f ",dogs[i].id,dogs[i].speed,dogs[i].battery);
    }
}
