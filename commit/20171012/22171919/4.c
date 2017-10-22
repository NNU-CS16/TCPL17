#include<stdio.h>
int main()
{
int a=1,b=0,c;
for(c=1;c<=10;c++)
{
a=a*c;
b+=a;
}
printf("%d\n",b);
return 2;
}
