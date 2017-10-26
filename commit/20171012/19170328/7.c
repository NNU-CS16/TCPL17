//逆序的三位数
//code by 康殷虎
//2017/10/19 19：56
#include<stdio.h>
int main()
{       printf("请输入一个三位数:");
	char a[3];//定义了一个能存放三个字符的数组
	int flag=0;//初始标记为0，用来判断0是否为后端
	scanf("%c%c%c",&a[0],&a[1],&a[2]);//%c为接受字符型的数据
	for(int i=0;i<=3;i++)
	{
		  if(a[2-i]=='0'&&flag==0)//当后端为0时不输出
			    continue;//跳出本循环层，进入下一循环层
		    printf("%c",a[2-i]);
		      flag=1;//当有数据输出时，后面的0就不算是后端，flag改变值，使后面的值允许输出
	}
	return 0;
}
