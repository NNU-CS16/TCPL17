/*99乘法表打印*/
#include <stdio.h>
int main()
{
  int i,j,n=0;   //i对应行,j对应列,n对应已输出数据个数

  for(i=1;i<=9;i++)        //外循环
    for(j=1;j<=9;j++,n++) //内循环
    {
      if(n&&n%9==0)
        printf("\n");    //每输出9个数据，输出一个换行符号
      printf("%d*%d=%d\t",i,j,i*j);  //输出等式及数据
    }
    printf("\n");

  return 0;
}


