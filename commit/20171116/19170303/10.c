#include<stdio.h>
int my_strlen(const char *str)
{
    int n=0;
    for(int i=0;str[i]!='\0';i++)
        n++;
    return n;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    printf("%d\n",my_strlen(str));
    return 0;
}
