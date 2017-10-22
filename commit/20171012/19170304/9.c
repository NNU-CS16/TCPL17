#include<stdio.h>
int main()
{
  float x,s;
  int i;
  char c;
  
  scanf("%f %d %c %f",&x,&i,&c,&s);
  
  printf("%c %d %.2f %.2f",c,i,x,s);
  
  return 0;
}
