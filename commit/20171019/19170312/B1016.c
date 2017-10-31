#include<stdio.h>
#include<math.h>
int main()
{
 int a,da,b,db,pa=0,pb=0;
 int n,t,u,i=0,j,k,sum;
 t=a,u=b;
 scanf("%d %d %d %d",&a,&da,&b,&db);
 for(n=1;t>=10;n++)
  t=t/10;
 for(;a>=10;)
 {
  j=a/pow(10,n-1);
  if(j==da){i++;}
  a=a%(int)pow(10,n-1);
  n=n-1;
 }
 if(a==da){i++;}
 for(k=0;k<=i-1;k++)
  pa=pa+da*pow(10,k);
 i=0;
 for(n=1;u>=10;n++)
  u=u/10;
 for(;b>=10;)
 {
  j=b/pow(10,n-1);
  if(j==db){i++;}
  b=b%(int)pow(10,n-1);
  n=n-1;
 }
 if(b==db){i++;}
 for(k=0;k<=i-1;k++)
  pb=pb+db*pow(10,k);
  sum=pa+pb;
 printf("%d\n",sum); 
 return 0;
}
