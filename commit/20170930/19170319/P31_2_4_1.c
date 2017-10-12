#include<stdio.h>
#include<math.h>
int main()
{

  double x,a,b,c,y,e;
  x=1,a=2,b=3,c=4;
  y=x*x*x+2*x*x+3*x+1;
  e=sqrt(abs(x));
  if(e==4*a/b*c)
   printf("wrong");
  else
   printf("y=%f",y);
  return 0;
}


  
