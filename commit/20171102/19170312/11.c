#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
 int len=strlen(str);
 len=len-1;
 for(;len>=0;len--)
 {
  printf("%c",str[len]);
 }
}
int main()
{
 char s[1000];
 scanf("%s",s);
 reverse(s);
 printf("\n");
 return 0;
} 
