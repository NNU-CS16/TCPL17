#include <stdio.h>
#define result(x) (a3)*x*x*x+(a2)*x*x+(a1)*x+(a0)

int main()
{
  int a3,a2,a1,a0;
  float a=-5,b=5,c,x;
  
  scanf("%d%d%d%d%d\n",&a3,&a2,&a1,&a0);
  c=a/2+b/2;
  
  if(b-a>0.01)
  {
    if(result(a)*result(b)<0)
    {
      if(result(c)==0)
        printf("%.2f\n",c);
      while(result(c)*result(a)>0)
      {
        a=c;
        c=a/2+b/2;
      }
      while(result(c)*result(b)>0)
      {
        b=c;
        c=a/2+b/2;
      }
    }
      
  }
  return 0;
}
