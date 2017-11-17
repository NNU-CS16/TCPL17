#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
int i=strlen(str),j;
for(j=0;j<i;j++)
printf("%c",str[i-j-1]);
}
int main()
{
char a[100];
scanf("%s",a);
reverse(a);
return 0;
}
