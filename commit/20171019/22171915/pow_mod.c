#include<stdio.h>
int main()
{
int a,b,c,d=1,e,i;
printf("a,b,c:");
scanf("%d %d %d",&a,&b,&c);
for(i=1;i<=b;i++)
d=d*a;
e=d%c;
printf("%d^%dmod%d=%d\n",a,b,c,e);
return 0;
}

