#include<stdio.h>
int main()
{
 int n,N,i,c=0,a[1000];
 printf("请输入一个十进制的数:");
 scanf("%d",&n);
 N=n;
 while (n!=0)
	{
 i=n%2;//i记录每位的值
 a[c]=i;//a数组记录各位的值
 c++;//c记录位数
 n=n/2;//记录所剩的值
}
 c--;//因为c代表存入数据的长度而下表范围是0～c-1
 for(;c>=0;c--)//倒序输出即为这个数字对应的二进制
printf("%d",a[c]);
printf("\n");
printf("%d的八进制为:%o\n",N,N);
printf("%d的十六进制为:%x\n",N,N);
return 0;
}


