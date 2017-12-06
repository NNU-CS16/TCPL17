#include <stdio.h>
int main()
{
    int m,n,i,j;
    int f = 0;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
	m = i;
        if ((m%2) != 0)
            f = m + f;
	else if ((m%2) == 0)
	{
	    while ((m%2) == 0)
	    {
	        m = m / 2;
		j = m;
	    }
	    f = f + j;
	}
    }
    printf("%d",f);
    return 0;
}

	    
