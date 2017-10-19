#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
int main(int argc,char const *argv[])
{
   unsigned a,result;
   int b,c,count;
   scanf("%d %d %d",&a,&b,&c);
   result=invert(a,b,c);
   printf("The result is:%d\n",result);


   return 0;
}

unsigned invert(unsigned x,int p,int n){
   return (x&~(~(~0<<n)<<(p+1-n)))|(x>>(p+1-n)^~(~0<<n))<<(p+1-n);
}
