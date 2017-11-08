#include <stdio.h>

int is_int_pal(int n)
{
  int t,s=0;
  t=n;
  while(t)
  s=s*10+t%10;
  t/=10; 
  if(s==n)
  return 0;
  else 
  return -1;
} 
int main()
{
  int n;
  printf("输入数字:"); 
  scanf("%d",&n);
  is_int_pal(n);
  return 0;
}








  
