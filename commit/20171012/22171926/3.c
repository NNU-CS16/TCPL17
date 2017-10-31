<<<<<<< HEAD
#include<stdio.h>
int main()
{
int i,j,sum=0,a,n,c;
scanf("%d,%d",&a,&n);
for (i=1;i<=n;i+=1)
{
c=1;
for (j=1;j<=i;j+=1)
{
sum+=a*c;
c=c*10;
}}
printf("%d",sum);
=======
#include <stdio.h>
int main()
{
int sum,n,a;
sum=0,n=a;
while(n!=pow(a,n+1))
{
sum=sum+n;
n=n*a;
}
printf("a+aa+aaa+...+aaa..a=%d\n",sum);
>>>>>>> ea6a6fac9148946b50f85af540788d33cbf57a8e
return 0;
}
