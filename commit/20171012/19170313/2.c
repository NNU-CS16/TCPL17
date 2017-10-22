#include<stdio.h>
int main()
{
   int sum,x,y,z;
   sum=0;
   for(x=1,y=2,z=3;x<=97,y<=98,z<=99;x=x+3,y=y+3,z=z+3)
   sum=sum+x*y*z;
   printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);
   return 0;
}
