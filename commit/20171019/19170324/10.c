#include <stdio.h>
int pow_mod(int,int,int);
int main()
{
      int a,b,c,i;
      scanf("%d%d%d",&a,&b,&c);

      i=pow_mod(a,b,c);
      printf("%d",i);
      return 0;
}

int pow_mod(int a,int b,int c)
{

      a=a%c;

      int i=1,t=a;
      for(;b;b>>=1)
      {
          if(b&1)
          i=(i*t)%c;
          t=(t*t)%c;
      }
      return i;
}
