#include <stdio.h>
int main()
{
  int n,a,x,y,z;
  scanf("%d",&a);
  x=a%10;
  y=a/10%10;
  z=a/100;
  printf ("%d\n",n=z+y*10+x*100);
  return 0;
}
