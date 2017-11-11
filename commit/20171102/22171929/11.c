#include <stdio.h>
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
    int i=0,j=0;
    char str1[100];
    while(str[i]!='\0')
    i++;
    i--;
    for(;i>=0;i--,j++)
    {
    str1[j]=str[i];
    printf("%c",str1[j]);
    }
   
}
   
