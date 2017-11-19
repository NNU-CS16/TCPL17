#include<stdio.h>
int step(int n,int a,int b)
{
  if (n==1||n==0)
     return a;
  if (n==2)
     return b;
  return step(n-1,b%100007,(a+b)%100007);
}
int main()
{
  int n,a=1,b=2;
  scanf("%d",&n);
  printf("走上N级台阶的走法：%d\n",step(n,a,b));
  return 0;
}


  
