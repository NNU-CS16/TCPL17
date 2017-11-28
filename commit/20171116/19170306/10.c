#include<stdio.h>
int my_strlen(char *);
int main()
{
char str[1000];
fgets(str,1000,stdin);
printf("%d\n",my_strlen(str));
return 0;
}
int my_strlen(char *str)
{
int i=0;
while(str[i]!='\0')
{
printf("%c",str[i]);
i++;
}
return i-1;
}
