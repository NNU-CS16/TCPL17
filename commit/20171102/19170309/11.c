#include<stdio.h>
#include<string.h>
void reverse(char* str); 
int main()
{
char str[100];
scanf("%s", &str[0]);
reverse(str);
return 0;
}
void reverse(char* str)
{
int i,b;
b=strlen(str);
char c;
for(i=b;i>=0;i--)
printf("%c", str[i]);
}
 
