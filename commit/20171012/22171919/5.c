#include<stdio.h>
int main()
{
int a,b;
for(b=1;b<=9;b++)
{
for(a=1;a<=b;a++)
{
printf("%d*%d=%d ",a,b,(a*b));
}
printf("\n");
}
return 0;
}
