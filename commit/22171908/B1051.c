#include<stdio.h>
#include<math.h>
int main()
{
    float R1,R2,P1,P2;
    float a1,a2,b1,b2;
  
    scanf("%f %f %f %f",&R1,&R2,&P1,&P2);
    a1=R1*cos(P1);
    a2=R2*cos(P2);
    b1=R1*sin(P1);
    b2=R2*sin(P2);
  
    float A,B;
    A=a1*a2-b1*b2;
    B=a1*b2+a2*b1;
  
    if (B>0)
    printf("%.2f+%.2fi\n",A,B);
  
    else 
    printf("%.2f%.2fi\n",A,B);
  
    return 0;	
}
