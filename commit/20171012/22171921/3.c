#include<stdio.h>
#include<math.h>
int main()
{
int a,n,b,sum=0;
printf("a=");
scanf("%d",&a);
printf("n=");
scanf("%d",&n);
b=pow(10,n+1);
sum=((b-9*n-10)/81)*a;
printf("sum=%d\n",sum);
return 0;
}



