#include <stdio.h>
int main()
{
  int a,b,c,x,y;
  scanf("%d",&a);
  b=a%10;
  c=((a-b)/10)%10;
  x=(((a-b)-c*10)/100)%10;
  y=b*100+c*10+x;
  printf("%d\n",y);
  return 0;
}
