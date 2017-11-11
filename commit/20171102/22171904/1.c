#include <stdio.h>

void triangle_judge(int a,int b, int c);
void triangle_judge(int a, int b,int c)
{
	if((a+b>c)&&(a+c>b))
	{
		if(a==b&&a==c)
		printf("等边三角形");
		else if((a==b)||(b==c)||(a==c))
		printf("等腰三角形");
		else
		printf("普通三角形");
	}
	else
	printf("不可构成三角形");
}
int main()
{
	int a,b,c;
	printf("请输入三边长：");
	scanf("%d%d%d",&a,&b,&c);
	triangle_judge(a,b,c);
	return 0;
}

