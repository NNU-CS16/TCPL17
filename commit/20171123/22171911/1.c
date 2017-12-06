#include <stdio.h>
int main( )
{
    int n, i;
    int sum = 0;
    scanf ("%d", &n);
    for (i = 1; i < n; i++)
    {
	if (i == 1)
	    sum = sum + 1;
	if (i % 2 == 0)
	{
	    while (i % 2 != 0)
		i = i / 2;
	    sum = sum + i;
	}
	if (i % 2 != 0)
	    sum = sum + i;
    }
    printf ("%d", sum);
    return 0;
}

	

	
