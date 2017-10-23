#include<stdio.h>
#include<math.h>
int main()
{
int a,n,i,p=0,sum=0;
printf("a,n:");
scanf("%d %d",&a,&n);
for(i=1;i<=n;i++)
{
p=p*10+a;
sum=sum+p;
}
printf("sum=%d\n",sum);
return 0;
}
