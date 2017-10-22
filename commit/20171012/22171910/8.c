#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
   if(a<=153)  printf("%x\n",a);  //限定范围，且将十进制转换为十六进制并输出
   else
     printf("error\n");
  return 0;
}
