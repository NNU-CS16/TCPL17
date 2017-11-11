#include <stdio.h>
void triangle_judge(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Please input:");
    scanf("%d%d%d", &a, &b, &c);
    triangle_judge(a, b, c);	
    return 0;
}	
void triangle_judge(int a, int b, int c)
{
    if (a + b > c && a - b < c) 
    {
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
	    printf("等腰三角形\n");
	if (a == b && a == c)
	    printf("等边三角形\n");
	if (a != b && a != c && b != c)
	    printf("普通三角形\n");
    }
    else
        printf("不构成三角形\n");
}

