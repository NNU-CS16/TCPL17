#include<stdio.h>
void Move1(char source, char help);
void Move2(char help, char target);
void Hanoi(int n, char source, char help, char target);
int A(int n);

int main()
{
	int n;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("%d\n", A(n));

	return 0;
}

void Move1(char source, char help)
{
	printf("%c->%c\n", source, help);
}

void Move2(char help, char target)
{
	printf("%c->%c\n", help, target);
}

void Hanoi(int n, char source, char help, char target)
{
	if (n == 1)
	{
		Move1(source, help);
		Move2(help, target);
	}
	else
	{
		Hanoi(n - 1, source, help, target);
		Move1(source, help);
		Hanoi(n - 1, target, help, source);
		Move2(help, target);
		Hanoi(n - 1, source, help, target);
	}
}

int A(int n)
{
	if (n == 1) return 2;
	else return 3 * A(n - 1) + 2;
}
