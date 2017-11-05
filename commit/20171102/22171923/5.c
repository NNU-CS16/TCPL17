#include<stdio.h>
int fac_bit_count(int n)
{
  int a,b;
  char c;
  for(a=1;a<=n;a++)
  {
    a*=a;
  }
  printf("%d",a);
  scanf("%c",&c);
  if(c>'0'&&c<'9')
  b++;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fac_bit_count(n));
  return 0;
}
