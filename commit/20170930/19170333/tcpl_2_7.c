#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{ 
    return x^(~(~0<<n)<<(p+1-n));
}
int main()
{
  unsigned x ;
  int  p ,n ;
  printf("请输入x，p,n 的值\n");
  scanf("%d%d%d", &x, &p, &n);

  printf("%d\n",invert(x,p,n));

  return 0;
}
