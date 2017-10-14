#include <stdio.h>
int main()
{
  float f1,f2;
  int b;
  char c;
  
  scanf("%f%d %c%f",&f1,&b,&c,&f2);
  printf("%c %d %.2f %.2f\n",c,b,f1,f2);
 
  return 0;
}
