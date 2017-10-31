#include <stdio.h>
 int x,y,a1,a2,a3,a0;
 float a,b;
  double f(int x)
  {
  return a3*x*x*x+a2*x*x+a1*x+a0;
  }
  int main()
  {
  scanf("%d %d %d %d\n",&a0,&a1,&a2,&a3);
  scanf("%f %f\n",&a,&b);
  if ((a-b)<(a+b)/2)
  printf("%.2f\n",(a+b)/2);
  else if ((a-b)>(a+b)/2)
  printf("%.2f\n",(a+b)/2);
  else if  (f(a)*f(b)<0)
  for (x=(a+b)/2,y=(a+b)/2;y!=0;y=f((a+b)/2))
  if (y==0)
  printf("%.2f\n",(a+b)/2);
  else if (y*f(a)>0)
  {a=(a+b)/2;
  printf("%.2f\n",a);}
  else 
  {b=(a+b)/2;
printf("%.2f\n",b);}
  return 0;
}
