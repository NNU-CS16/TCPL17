#include <stdio.h>
int sum(int n)
{
  if(n==1) return 1;
  if(n%2==0)
  {
    return sum(n/2)+n*n/4;
  }
  else
  {
    return n+sum(n-1);
  }
}

int main()
{
  
  int n,m;
  printf("输入一个整数:  \n");
  scanf("%d",&n);
  sum(n);
  printf("f(1)+f(2)+...f(%d)=%d\n",n,m);
  return 0;
} 
