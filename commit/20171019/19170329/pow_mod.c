#include<stdio.h>
int pow_mod(int,int,int);
int main()
{
      int a,b,c,s;
      scanf("%d%d%d",&a,&b,&c);
  
      s=pow_mod(a,b,c);
      printf("%d",s);
      return 0;
}

int pow_mod(int a,int b,int c)
{
      
      a%=c;
      int s=1,t=a;
      for (;b;b>>=1)
   {
          if(b&1)
              s=s*t%c;
              t=t*t%c;
   }
      return s;
}
