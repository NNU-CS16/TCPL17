#include <stdio.h>
#include <math.h>

int a0,a1,a2,a3;

float f(float x)
{
    
    return a3*x*x*x+a2*x*x+a1*x+a0;
  
}

int main()
{
  
    float a,b;
    
    scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
    scanf("%f%f",&a,&b);
    
    while (fabs(a-b)>1e-3)
    {
      
      if (fabs(f(a))<1e-6) break;
      if (fabs(f(b))<1e-6) {a=b; break;}
      
      if (f(a)*f((a+b)/2)<=0) b=(a+b)/2;
      else a=(a+b)/2;
    
    }
  
    printf("%.2f\n",a);
    
    return 0;
  
}
