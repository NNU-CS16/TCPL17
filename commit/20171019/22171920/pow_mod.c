#include<stdio.h>
#include<math.h>
int main()
{
  long int a,b,c,x,y;
  
  printf("输入a,b,c:");
  scanf("%ld,%ld,%ld",&a,&b,&c);
  
  x=pow(a,b);
  y=x%c;
 
  printf("%ld\n",y);

  return 0;
}
  
