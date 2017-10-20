#include<stdio.h>
unsigned getbits(unsigned x,int p,int n);
unsigned setbits(int x,int p,int n,int y);
int main(int argc,char const *argv[])
{
   unsigned a,y,result;
   int b,c,count;
   scanf("%d %d %d %d",&a,&b,&c,&y);
   //result=getbits(a,b,c);
   result=setbits(a,b,c,y);
   printf("The result is:%d\n",result);
   return 0;
}

unsigned setbits(int x,int p,int n,int y){
   return (x & ~(~(~0<<n)<<(p+1-n)))|((y & ~(~0<<n))<<(p+1-n));
}

unsigned getbits(unsigned x,int p,int n){
   return(x>>(p+1-n)) & ~(~0<<n);
}
