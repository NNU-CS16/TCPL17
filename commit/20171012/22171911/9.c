#include<stdio.h>
int main( )
{
  float a1,a2;
  int c;
  char d;
  scanf("%f %d %c %f",&a1,&c,&d,&a2);
  
  printf("%c %d %.2f %.2f",d,c,a1,a2);
  return 0;
}
