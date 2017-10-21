#include <stdio.h>
int main()
{
    int a,b,c,x,m,n,j;
    99<x<1000;
    scanf("%d",&x);
    a=x/100;
    b=(x-a*100)/10;
    c=x%10;
    if(b>=0,c>0)
      m=c*100+b*10+a;
      printf("m=%d\n",m);
    if(b>0,c=0)
      n=b*10+a;
      printf("n=%d\n",n);
    if(b=0,c=0)
      j=a;
      printf("j=%d\n",j);
   return 0;
}

