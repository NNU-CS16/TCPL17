#include<stdio.h>
int main()
{
int n,a,b;
scanf("%d",&n);
if (0<=n<=153)
{a=~(~0<<4)&n;
b=n>>4;
printf("%d\n",10*b+a);

}
else printf("wrong number\n");
return 0;
}
