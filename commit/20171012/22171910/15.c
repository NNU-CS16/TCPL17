/*十进制转换为二进制、八进制、十六进制*/
#include <stdio.h>
int main()
{
  int b,m,n=0,a[30];
  printf("请输入一个整数:");
  scanf("%d",&b);
  printf("该数的八进制形式为:%o\n",b);     //输出八进制数
  printf("该数的十六进制形式为:%x\n",b);  //输出十六进制数
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
    printf("%d",a[n]);  //输出二进制形式
  }
  printf("\n");
  return 0;
}
