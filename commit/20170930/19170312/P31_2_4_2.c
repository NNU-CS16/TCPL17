#include <stdio.h>
#include <math.h>
int main()
{
  float x,a,b,c;
  int abs(int x);
  printf("Please enter the number of x,a,b,c\n");
  scanf("%f%f%f%f",&x,&a,&b,&c);
  if (sqrt(abs(x))!=(4*a)/(b*c))
   printf("Not equal!\n");
  else
   printf("Equal!\n");
  return 0;
}
