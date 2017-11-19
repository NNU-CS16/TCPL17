#include <stdio.h>
void Move(char source, char target);
void Hanoi(int n, char source, char help, char target);
int sum(int n);

int main( )
{
    int n, b;
    scanf ("%d", &n);
    Hanoi(n, 'A', 'B', 'C');
    b = sum(n);
    printf ("%d", b); 
    return 0;
}

void Move(char source, char help)
{
    printf ("%c -> %c\n", source, help);
}

void Hanoi(int n, char source, char help, char target)
{
    if (n == 1)
    {
	Move(source, help);
        Move(help, target);
    }
    else
    {
        Hanoi(n - 1, source, help, target);
	Move(source, help);
	Hanoi(n - 1, target, help, source);
	Move(help, source);
	Hanoi(n - 1, source, help, target);
    }
}

int sum(int n)
{
    if (n == 1)
	return 2;
    return 3 * sum(n - 1) + 2;
}
    







