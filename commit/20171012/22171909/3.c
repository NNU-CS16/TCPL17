#include <stdio.h>
int main()
{
int sum,a,b,i,n;
printf("a=");
scanf("%d",&a);
printf("n=");
scanf("%d",&n);
i=1;
sum=0;
b=a;
while(i<=n)
{
sum=sum+b;
b=a+b*10;
i++;
}
printf("%d\n",sum);
return 0;
}
