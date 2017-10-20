#include<stdio.h>
int main()
{
int a,b;
printf("99 multiplication table:\n");
for(a=1;a<10;a++)
{
for(b=1;b<=a;b++)
printf("%d*%d=%-3d",b,a,a*b);
printf("\n");
}
return 0;
}
