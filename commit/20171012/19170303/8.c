#include<stdio.h>
int main()

{
int x,a,b;
printf("请输入一个[0,153]范围内的正整数：");
scanf("%d",&x);
a=x%16;
b=x/16*10+a;
printf("%d\n",b);
return 0;



}
