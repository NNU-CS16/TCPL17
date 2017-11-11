#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a!=b&&a!=c&&b!=c)
			printf("ordinary triangle");
		else if(a==b&&a==c&&b==c)
			printf("equilateral triangle");
		else
			printf("isosceles triangle");
	}
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	triangle_judge(x,y,z);
	return 0;
}
