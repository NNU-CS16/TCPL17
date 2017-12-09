#include <stdio.h>

int yueshu(int n);
int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", yueshu(n));
 
    return 0;
}

int yueshu(int n)
{
    int i, j, sum = 0;
    for (i = 1; i <= n; i++)
    {
	for (j = i; j > 0; j--)
	{
	    if (i % j == 0 && j % 2 != 0)
	    {
		sum = sum + j;
	        break;
	    }
	}
    }
    return sum;
}
