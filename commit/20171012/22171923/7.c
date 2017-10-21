#include<stdio.h>
int main()
{
  int a,b,c,n;
  printf("请输入一个三位整数:");
  scanf("%3d",&n);
  a=n/100;
  b=(n-a*100)/10;
  c=n-a*100-b*10;
  printf("%d的逆序是%d%d%d\n",n,c,b,a);
  if(c==0)
  {
    if (b==0)
    printf("%d的逆序是%d\n",n,a);
    else  printf("%d的逆序是%d%d\n",n,b,a);
  }
  return 0;
}
