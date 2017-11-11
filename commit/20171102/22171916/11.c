#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
 char str[1000];
 gets(str);
 reverse(str);
 printf("%s\n",str);

}
void reverse(char* str)
{
  char* p=str+strlen(str)-1;
  char temp;
  while(str<p)
     temp=*p, *p--=*str, *str++=temp;

}
