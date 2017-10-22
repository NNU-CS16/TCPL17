#include <stdio.h>
#include <math.h>
void main()
{
  float a,b,c,d,x1,x2;

   printf("输入方程的三个系数:");
   scanf("%f%f%f",&a,&b,&c);

   d=b*b-4*a*c;
   x1=(-b+sqrt(d))/(2*a);
   x2=(-b-sqrt(d))/(2*a);
   printf("方程的解分别为：x1=%.2f x2=%.2f \n",x1,x2);

  return 0;
}
