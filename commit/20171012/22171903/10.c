#include<stdio.h>
float f(float x);
float a0,a1,a2,a3;
int main()
{
    float a,b,c;
    
    scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
    scanf("%f %f",&a,&b);
  
    while((b-a)>=0.001&&f(a)*f(b)<=0)
    {  
          if(f(a)==0)
        {   printf("%.2f\n",a);
            return 0;
        }
          if(f(b)==0)
        {    printf("%.2f\n",b);
             return 0;
        }
         c=(a+b)/2;
         if(f(a)*f(c)>0)
        {  
             a=c;
        }
          else
        { 
              b=c;
        }
    }
    printf("%.2f",c);   
    return 0; 
}
float f(float x)
{
      float y;
      y=a3*x*x*x+a2*x*x+a1*x+a0;
      return y;
}
