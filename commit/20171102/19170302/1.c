#include <stdio.h>
void triangle_judge(int a, int b, int c);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    triangle_judge(a, b, c);
    printf("\n");
    return 0;
}

void triangle_judge(int a, int b, int c)
{
	int flag=0;
	if (a+b>c && a+c>b && b+c>a)
	{
		flag=1;
		if (a == b == c)
			printf("eguilateral triangle");
		else if (a == b || b == c || a == c)
			printf("isosceles triangle");
		else
			printf("regular triangle");
	}
	if (!flag)
		printf("triangle can not be formed");
}
