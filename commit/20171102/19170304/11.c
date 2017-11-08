#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
    char str[100];
    scanf("%s",str);

    reverse(str);

    return 0;
}

void reverse(char* str)
{
     int i,len;
     len=strlen(str);

     for(i=len-1;i>=0;i--)
         printf("%c",str[i]);
}
