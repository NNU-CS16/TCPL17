#include<stdio.h>

#include<math.h>



int main()

{

 

   double r1,p1,r2,p2,a,b;

   

   scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);

   a=r1*cos(p1)*r2*cos(p2)-r1*sin(p1)*r2*sin(p2);

   b=r1*cos(p1)*r2*sin(p2)+r1*sin(p1)*r2*cos(p2);

   if(fabs(a)<0 && fabs(b)<0) printf("0");

   else 

   if(fabs(a)>=0)

   if(fabs(b)<0) printf("%.2f+0.00i",a);

      else printf("%.2f%+.2fi",a,b);

   else printf("0.00%+.2fi",b);

       

   return 0;

   

}
