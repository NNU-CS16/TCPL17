#include <stdio.h>
int main()
{
  char c;
  float f1,f2;
  int n;
  scanf("%f,%d,%c,%f",&f1,&n,&c,&f2);
  printf("%c,%d,%.2f,%.2f",c,n,f1,f2);
  return 0;
}
