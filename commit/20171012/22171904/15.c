#include <stdio.h>
int main()
{
  int b,m,n=0,a[30];
  printf("请输入一个整数:");
  scanf("%d",&b);
  printf("该数的八进制形式为:%o\n",b);     
  printf("该数的十六进制形式为:%x\n",b);  
  while(b!=0)
  {
    m=b%2;
    a[n]=m;
    n++;
    b=b/2;
  }
  n--;
  printf("该数的二进制形式为:");
  for(;n>=0;n--)
  {
    printf("%d",a[n]);  
  }
  printf("\n");
return 0;
}
