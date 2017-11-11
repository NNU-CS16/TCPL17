#include <stdio.h>

void triangle_judge(int a,int b,int c);

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if((a+b>c)&&(b+c>a)&&(a+c)>b) triangle_judge(a,b,c);
	else printf("不能构成三角形\n");

	return 0;
}

void triangle_judge(int a,int b,int c)
{
	if(a==b&&b==c&&c==a) printf("等边三角形\n");
	else if(a==b||b==c||a==c) printf("等腰三角形\n");
	else printf("普通三角形\n");
}
