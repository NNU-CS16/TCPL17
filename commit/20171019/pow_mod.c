#include<stdio.h>
#include<math.h>
int main()
{
  unsigned long int a,b,c;
  scanf("%u,%u,%u",&a,&b,&c);
 
  unsigned long int x,y;
  x=pow(a,b);
  y=x%c;

  printf("%u\n",y);
  return 0;
}
  
