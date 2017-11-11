#include <stdio.h>
void triangle_judge(int a, int b, int c);
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	triangle_judge(a, b, c);
	return 0;
}
void triangle_judge(int a, int b, int c)
{
	if( a + b <= c || a + c <= b ||a + c <= b)
		printf("It is not a triangle");
	else if( a == b == c)
		printf("Tt is a equilateral triangle");
	else if( a == b || a == c || b == c)
		printf("It is a isosceles triangle");
	else printf("It is a normal triangle");
}
