#include<stdio.h>
int main()
{
int x,i,j,a[30];
   printf("请输入一个十进制整数：");
   scanf("%u",&x);
int y=x;
   printf("该数的二进制是");
while(x!=0)
{
   i=x%2;
if(i==1)
  a[j]=1;
else
  a[j]=0;
  j++;
  x=x/2;
}
  j--;
for(x=0;j>=0;j--)
{
printf("%d",a[j]);
}
printf("\n");

printf("该数的八进制是%o\n该数的十六进制是%x\n",y,y);

return 0;
}

