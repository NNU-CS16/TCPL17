#include <stdio.h>
int count = 0;
int f(int n,char sou, char hel, char tar);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n, 'a', 'b', 'c'));
    return 0;
}

int f(int n,char sou, char hel, char tar)
{
    if (n == 1) 
	 count = count + 2;
    else
    {
	f(n - 1, sou, hel, tar);
	count++;
	f(n - 1, tar, hel, sou);
	count++;
	f(n - 1, sou, hel, tar);
    }
    return count;
}
