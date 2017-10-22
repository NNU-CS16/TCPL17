#include<stdio.h>
int main()
{
int i;
printf("请输入一个三位数");
scanf("%d",&i);
if(i>999||i<100)
printf("你输入的不是一个三位数\n");
else
{
printf("%d\n",(i%10)*100+(i%100/10)*10+i/100);
}
return 0;
}
