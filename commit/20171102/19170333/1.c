#include <stdio.h>
#include <math.h>
void triangle_judge(int a, int b, int c)
{
	if (a+b > c && (fabs(a-b)) < c)
	{
		if (a == b)
		{
			if (a != c)
			{
				printf("This triangle is isosceles triangle\n");
			}
			else
				printf("This triangle is equilateral triangle\n");
		}
		else
			printf("This triangle is regular triangle\n");
	}
	else
		printf("This not a triangle\n");
}
int main()
{
	int a, b, c;
	printf("please input three figure:");
	while (scanf("%d%d%d",&a, &b, &c) == 3)
	{
		triangle_judge(a, b, c);
		printf("Input three figure again.\n");
		printf("Or input q to quit:");
	}
	printf("Over\n");
	return 0;
}
