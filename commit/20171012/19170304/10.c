#include<stdio.h>
#include<math.h>
int main()
{
  int  a3,a2,a1,a0,a,b,f0,f1,f2, x;
  scanf("%d,%d,%d,%d",&a3,&a2,&a1,&a0);
  scanf("%d,%d",&a,&b);

  f1=a3*a^3+a2*a^2+a1*a+a0;
  f2=a3*b^3+a2*b^2+a1*b+a0;
  
  if(f1=0) printf("%d\n",a);
  if(f2=0) printf("%d\n",b);
  if(f1*f2>0) printf("error\n");
  else
    {
      x=(a+b)/2;
      f0=a3*x^3+a2*x^2+a1*x+a0;
      if(f0==0) printf("%d\n",x);
      else
          if((f0*f1)<0)
            {
               b=x;
               f2=f0;
                      }
          else
              {a=x;
               f1=f0;
                      }
          printf("%d\n",x);            
                                      }
  
  return 0;
}
