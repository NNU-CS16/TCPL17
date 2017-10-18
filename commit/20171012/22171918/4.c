#include <stdio.h>
int main ()
{
  int a,b,c;
  a=0;
  b=1;
  for(c=1; c<11;c++)
  {
     b=b*c;
     a+=b;
  }
  printf("%d\n",a);
  return 0;
}
