/*6.c_汉诺塔加强版*/
#include <stdio.h>

void Move(char source, char help);
void Hanoi(int n, char source, char help, char target);
int Count(int n);

int main()
{
	int n;
	char source, help, target;
	printf("请输入层数n：");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("总步骤：%d\n", Count(n));
	return 0;
}

void Move(char source, char help)
{
	printf("%c -> %c\n", source, help);
}

void Hanoi(int n, char source, char help, char target)
{
	if(n == 1)
	{
		Move(source, help);
		Move(help, target);
	}
	else
	{
		Hanoi(n - 1, source, help, target);
		Move(source, help);
		Hanoi(n - 1,target, help, source);
		Move(help, target);
		Hanoi(n - 1, source, help, target);
	}
}

int Count(int n)
{
	if(n == 1)
		return 2;
	else
		return 3*Count(n - 1) + 2;
}
