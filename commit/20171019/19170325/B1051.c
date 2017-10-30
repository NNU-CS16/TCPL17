#include<stdio.h>
#include<math.h>

int main()
{

   float a1,a2,b1,b2,m,n,R1,R2,P1,P2;

   printf("please input R1,P1,R2,P2:");

   scanf("%f%f%f%f",&R1,&P1,&R2,&P2);

   a1=R1*cos(P1);
   b1=R1*sin(P1);
   a2=R2*cos(P2);
   b2=R2*sin(P2);

   m=a1*a2-b1*b2;
   n=a1*b2+a2*b1;

   if(n<0)
    {
     n=fabs(n);
     printf("%.2f-%.2fi\n",m,n);
    }
   else
     printf("%.2f+%.2fi\n",m,n);

   return 0;


}
