#include<stdio.h>
int main()
{
 long int i,j,a,b,m,n;
 scanf("%ld%ld%ld%ld",&a,&b,&m,&n);
 for(i=0;a>0;)
 {
   if(a%10==b)
   {
     ++i;
   }
   a/=10;
 }
  for(j=0;m>0;)
 {
   if(m%10==n)
   {
     ++j; 
   }
   m/=10;
 }
 if(i==0)
    b=0;
 if(j==0)
    n=0;
 for(;i>0;--i)
 {
   b=b*10+b;
 }
 for(;j>0;--j)
 {
   n=n*10+n; 
 }
 
 printf("\n%ld",m+n);
 return 0;
}
