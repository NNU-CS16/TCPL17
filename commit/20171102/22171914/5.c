#include <stdio.h>
#include <math.h>
int fac_bit_count(int n); 
int main()
{
  int n,c;
  printf("请输入一个整数n:\n");
  scanf("%d",&n);
  c=fac_bit_count;
  printf("%d\n",c); 
  return 0;
}
int fac_bit_count(int n) 
{
  int a=1;       
  int i;
  for(i=1;i<=n;i++)
  {
    a=i*a;
  }
  int b,j=0;
  while(a>0)
  {
    b=a%10;
    a=a/10; 
    printf("%d\n",b);
    j++;
  }
  return j;
}     
