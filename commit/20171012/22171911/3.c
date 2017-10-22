#include<stdio.h>
#include<math.h>
int main( )
{
  int a,n,x,sum;
printf("a= ,n= ");
 scanf("%d%d",&a,&n);
 x=1,sum=0;
 while(x<=n)
 {
 sum=sum+((pow(10,x)-1)/9)*a;
 x++;
 }
printf("a+aa+aaa+...+aa...a=%d\n",sum);
return 0;
}


