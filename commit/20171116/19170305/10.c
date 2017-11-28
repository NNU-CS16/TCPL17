#include<stdio.h>
int my_strlen(const char* str);
int main()
{
int i;
char str[1000];
fgets(str,1000,stdin);
//while(*(str+i)!='\0')
//i++;
i=my_strlen(str);
printf("%d\n",i-1);
return 0;
}
int my_strlen(const char* str)
{
int i=0;
while(*(str+i)!='\0')
i++;
return i;
}


