#include<stdio.h>
int main()
{
  int a=1,b=2,c=3,sum=0;
  while(c<=99)
   {
   sum=sum+a*b*c;
   a=a+3;
   b=b+3;
   c=c+3;
    }
  printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);
  return 0;


}
