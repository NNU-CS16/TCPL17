#include<stdio.h>
int main()
{
	   int a;
	   float b,c;
	   char d;
	   printf("请输入浮点数1,整数，字符，浮点数2：");
	   scanf("%f,%d,%c,%f",&b,&a,&d,&c);
	   printf("字符是%c,整数是%d,浮点数1是%.2f,浮点数2是%.2f\n",d,a,b,c);	
      			   return 0;
}
