#include<stdio.h>//p->speed=(*p).speed
#include <string.h>
struct robot//结构体定义,定义结束要加分号，这里要跟函数的定义区分
{
    char id[50];
    float speed;
    float battery;
};

//struct robot dog1 = {"kkk", 25.0f, 66.6f};//结构体声明
struct robot dog1;
int main()
{ 
    struct robot *p=&dog1;
    //p->id="robot-01";  //错误这行，数组赋值不能这么赋值，包括dog1.id[50]="robot1"也是错的这么赋值
    strcpy(p->id, "robot-01");
    p->speed=35;
    p->battery=88.5;
    /*name[0] = 'r';
    name[1] = 'o';
    name[2] = 'b';
    name[3] = 'o';
    name[4] = 't';
    name[5] = '\0';*/   //不用strcpy就这么一个一个数组元素赋值
    /*dog1.speed = 25;
    dog1.battery = 66.6;
    strcpy(dog1.id, "kkk");*/  //这是第二种声明id为字符串的方式，当然这边三行直接删除用struct={}这个结构最快。
    //利用strcpy函数。会把 "kkk" 的字符内容（包括结尾的 '\0'）复制进 dog1.id 数组里。
    printf("%s %.1f %.1f",p->id,p->speed,p->battery);
}


