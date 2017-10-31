#include<stdio.h>
#include<math.h>
int main ()
{
     double R1,P1,R2,P2;
     double p,q;
    
     scanf("%lf %lf %lf %lf",&R1,&P1,&R1,&R2);
     p=R1*R2*cos(P1+P2);
     q=R1*R2*sin(P1+P2);

     if (p<0&&p>-0.005)
        p=0;
     if (q<0&&q>-0.005)
        q=0;
     
     printf("%.2lf%+.2lf",p,q);
 
     return 0;
}

