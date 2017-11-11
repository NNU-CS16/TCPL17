#include <stdio.h>
int is_str_pal(const char* str);
int main()
{
   int a;
   char str[100];
   scanf("%s",str);
   a=is_str_pal(str);
   if(a==0)
   printf("yes");
   if(a==-1)
   printf("no");
   return 0;
}
int is_str_pal(const char* str)
{
    int i=0,j=0,b,c;
    while(str[i]!='\0')
    i++;
    i--;
    for(;j<=i;i--,j++)
    {
    if (str[i]!=str[j])
     break;
    }
    if(j<=i)
    return -1;
    else return 0;
}
     
