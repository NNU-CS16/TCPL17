#include <stdio.h>
int count = 0;
int Hanoi(int n, char sou, char hel, char tar);
int main()
{
    int n, m;
    scanf("%d", &n);
    printf("%d\n", 2 * Hanoi(n, 'a', 'b', 'c'));
    return 0;
}

int Hanoi(int n, char sou, char hel, char tar)
{
    if (n == 1)
    	count ++;
    else
    {
	Hanoi(n - 1, sou, tar, hel);
    	count ++;
	Hanoi(n - 1, hel, sou, tar);
    }
    return count;
} 
