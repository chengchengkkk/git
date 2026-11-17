#include<stdio.h>
#include <string.h>
struct robot
{
    char id[20];
    float speed;
    float battery;
};
void change(struct robot *dog,float speed,float battery)
{
    dog->speed=speed;
    dog->battery=battery;
}
struct robot speedfast(struct robot dogs[],int n)//这边写*dogs,dogs[],dogs[10]都对
{
    int max_index=0;
    for (int i = 1; i < n; i++)
    {
        if (dogs[i].speed > dogs[max_index].speed)
        {
            max_index = i;
        }
    }
    return dogs[max_index];
}
struct robot dogs[] = {
    {"aaa", 15.0f, 1.23f},
    {"bbb", 18.0f, 4.56f},
    {"ccc", 5.0f, 7.89f},
    {"ddd", 22.0f, 9.89f}
};
int main()
{
    struct robot fastest = speedfast(dogs, 4);//dogs数组名，代表指针，所以理论上上面那个函数定义写*dogs最合适
    printf("%s %.1f %.2f\n",
       fastest.id,
       fastest.speed,
       fastest.battery);
}
