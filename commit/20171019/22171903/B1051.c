#include<stdio.h>
#include<math.h>
int main()
{
   float r1,p1,r2,p2,a,b;
   scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
   a=cos(p1)*cos(p2)-sin(p1)*sin(p2);
   b=cos(p1)*sin(p2)+cos(p2)*sin(p1);
   a=a*r1*r2;
   b=b*r1*r2;
   if(b<0)
   printf("%.2f%.2fi\n",a,b);
   return 0;

}
