#include <stdio.h>
void Move(char x, char y);
void Hanoi(int n, char x, char y, char z);
int sum(int n);
int main()
{
    int n, b;
    scanf("%d", &n);
    Hanoi(n, 'A', 'B', 'C');
    b = sum(n);
    printf("%d\n", b);
    return 0;
}
void Move(char x, char y)
{
    printf("%c -> %c\n", x, y);
}
void Hanoi(int n, char x, char y, char z)
{
    if (n == 1)
    {
	Move(x, z);
	Move(z, y);
    }
    else
    {
	Hanoi(n - 1, x, z, y);
	Move(x, z);
	Hanoi(n - 1, y, z, x);
	Move(z, x);
	Hanoi(n - 1, x, z, y);
    }
}
int sum(int n)
{
    if (n == 1)
	return 2;
    else
	return 3 *sum(n - 1) + 2;
}

