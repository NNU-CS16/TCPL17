/*1.c_判断三角形*/
#include <stdio.h>

void triangle_judge(int a, int b, int c)
{
	if(a + b > c > 0 && a + c > b > 0 && b + c > a > 0)
    {
		if(a == b && b == c && a == c)
    		printf("等边三角形\n");
		else
     	{
			if(a == b || a == c || b == c)
				printf("等腰三角形\n");
        	else 
          		printf("普通三角形\n");
		}
    }
    else
		printf("不能构成三角形\n");
}

int main()
{
	int a,b,c;

	printf("请输入整数a b c：");
	scanf("%d%d%d", &a, &b, &c);
	triangle_judge(a, b, c);
	return 0;
}
