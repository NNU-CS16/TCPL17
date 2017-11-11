#include<stdio.h>
#include<math.h>

int main()
{
     double R1,P1,R2,P2;
     
     scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
     
     double a,b;
    
     a=(R1*R2)*cos(P1+P2);
     b=(R1*R2)*sin(P1+P2);
    
      if(fabs(a)<0.01)
         a=0;
     
     
      if(fabs(b)<0.01)
         b=0;

      
         printf("%.2lf%+.2lfi",a,b);
         
} 
