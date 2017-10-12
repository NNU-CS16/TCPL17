#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("a=%d,b=%d\n",a,b);
  a=b-a;
  b=b-a;
  a=b+a;
  printf("a=%d, b=%d\n",a,b);
  return 0;
}
