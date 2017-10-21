#include<stdio.h>
long f(float x)
}
    float result;
    result=i*x*x*x+j*x*x+k*x+l;
    return result;
}
int main(void)
{
    float i,j,k,l;
    scanf("%f%f%f%f",&i,&j,&k,&l);
    float a,b;
    scanf("%f%f",&a,&b);
    if(f(a)==0)
    x=a; 
    if(f(b)==0)
    x=b;
    

  






    while(f(a)*f(b)<0&&b-a>=0.001)
         {
         x=(a+b)/2;
         if(f(x)*f(a)>0)
         a=x;
         if(f(b)*f(x)>0)
         b=x;
         if(f(x)==0)
         break;
         }
   printf("%0.2f",x);
   return 0;
}







 
