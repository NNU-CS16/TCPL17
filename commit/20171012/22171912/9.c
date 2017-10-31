#include <stdio.h>

int main()
{
  int n;
  char c;
  float a,b;
  
  scanf("%f %d %c %f",&a,&n,&c,&b);
  printf("%c %d %.2f %.2f\n",c,n,a,b);
  
  return 0;
}
