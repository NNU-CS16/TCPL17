#include<stdio.h>
int main()
{
   int m,n,p,sum=0,q=1;
   for(m=1,n=2,p=3;p<=99;m=m+3,n=n+3,p=p+3)
   {
     q=m*n*p;
     sum=sum+q;
   }
  
   printf("1*2*3+4*5*6+...+97*98+99=%d\n",sum);
   return 0;
}
