#include<stdio.h>

void triangle_judge(int a,int b,int c)
{
	if (a+b>c && a+c>b && b+c>a)
	{
	 if (a==b==c)
	 printf("It is an equilateral triangle.");
	 else if (a==b || a==c || b==c)
	 printf("It is an isosceles triangle.");
	 else 
	 printf("It is a regular triangle.");
	}

	else
	 printf("It can't be a triangle.");
}

int main(void)
{
	int a,b,c;
	printf("Please enter three intege:");
	scanf("%d %d %d",&a,&b,&c);

	triangle_judge(a,b,c);


	return 0;
}
