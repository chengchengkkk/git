#include <stdio.h>
int my_strlen(const char *str)
{
    int len=0;
    for (int i=0;str[i]!='\0';i++){
        
         len++;
    }
    return len;

}
int main()
{
    printf("字符串长度分别是%d\n%d\n%d\n",my_strlen("Hello"),my_strlen("Robot"),my_strlen("EmbodiedAI"));
}