#include<stdio.h>
int LCM(int m,int n)
{
  int a,b,c,i;
  if(m<n)
  {
    a=m;
    b=n;
  }
  while(b!=0)
  {
    c=a%b;
    a=b;
    b=c;
  }
  i=m*n/a;
  return i;
}
int main()
{
  int m, n;
  printf("请输入两个正整数:\n");
  scanf("%d%d",&m,&n);
  printf("%d\n",LCM(m,n));
  return 0;
}
