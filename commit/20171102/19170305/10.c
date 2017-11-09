#include<stdio.h>
int is_str_pal(const char* str);

int main()
{
const char* str;
printf("%d\n",is_str_pal(str));
return 0;
}

int is_str_pal(const char* str)
{
char c;
char x[100];
int i=0,j;
while(c!='\n')
{
scanf("%c",&c);
x[i]=c;
i++;
}
for(j=0;j<i-1;j++)
{
if(x[j]!=x[i-j-2])
return -1;
}
return 0;
}
