#include<stdio.h>
#include<math.h>
#include<complex.h>
int main()
{
   float r1,p1,r2,p2,a1,b1,a2,b2,c1,c2,e;
   scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
   a1=r1*cos(p1),b1=r1*sin(p1),a2=r2*cos(p2),b2=r2*sin(p2);
   c1=a1*a2-b1*b2,c2=a1*b2+a2*b1,e=fabs(c2);
   if(c2<0)
   printf("%.2f-%.2fi",c1,e);
   if(c2>=0)
   printf("%.2f+%.2fi",c1,c2);
   return 0;
}
