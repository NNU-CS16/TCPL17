/*5.c_Hanoi双塔*/
#include <stdio.h>

int Count_Hanoi(int n);

int main()
{
	int n, An;
	printf("请输入1～25之间的正整数n：");
	scanf("%d", &n);
	An = 2*Count_Hanoi(n);
    printf("最少步数An为：%d\n", An);
	return 0;
}

int Count_Hanoi(int n)
{
    if (n == 1)
		return 1;
	return 2*Count_Hanoi(n - 1) + 1;
}

