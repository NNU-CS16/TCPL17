#include<stdio.h>
#include<string.h>
int my_strlen(const char* str);
int main()
{
    char str[100];
    gets(str);
    printf("%d",my_strlen(str));
    return 0;
}

int my_strlen(const char* str)
{
    int count=0;
    int i;
    for(i=0;;i++)
    {
    if(str[i]=='\0')
    break;
    else
    count++;
    }
    return count;
}



