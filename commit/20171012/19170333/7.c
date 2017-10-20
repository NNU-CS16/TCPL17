#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("please input your number:");
  scanf("%d",&n);
  int a,b,c,p;
  a=n/100;
  b=(n-a*100)/10;
  c=n-a*100-b*10;
  p=c*100+b*10+a;
  printf("input:%d\t\n",p);

  return 0;
}
