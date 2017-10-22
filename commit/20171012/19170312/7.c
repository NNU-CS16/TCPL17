#include<stdio.h>
int main()
{
  int i;
  printf("please input the number of i:");
  scanf("%d",&i);
  int a=i%10;
  int b=(i/10)%10;
  int c=(i/100)%10;
  printf("%d\n",a*100+b*10+c);
  return 0;
}
