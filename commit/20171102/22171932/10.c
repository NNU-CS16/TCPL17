#include<stdio.h>
#include<string.h>
#define MAX 50
int is_str_pal(const char* str);
int main()
{
char str [MAX];
int a;
printf("请输入字符串:\n");
scanf("%s",str);
a=is_str_pal(str);
printf("%d\n",a);
return 0;
}
int is_str_pal(const char* str)
{
    char i,j;
    int flag=0;
    for(i=1,j=strlen(str)-1;j>=i;i++,j--)
       {
       if(str[i]!=str[j])
         { 
         flag=-1;
         break;
         }
       }
      return flag;
}   
