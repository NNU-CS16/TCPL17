#include<stdio.h>
void main()
{
 int i,j;
 i=1;
 j=1;
 for(i=1;i<=9;i++)   // 控制行，一共9行
 for(j=1;j<=i;j++)  // 控制各行的列数
{
 printf("%d*%d=%d",j,i,i*j); // 输出乘法表各项内容
 if(i!=j) printf("\t");  // 相邻两项直接加空格
 if(i==j) printf("\n");  // 控制列数
}
}
