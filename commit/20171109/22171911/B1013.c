#include <stdio.h>
#include <math.h>
int a(int n)
{
    int i;
    if (n == 1 || n == 2)
        return 1;
    if (n >= 3)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
	        break;
        }
    }
    if(i > sqrt(n))
        return 1;
    else
        return 0;
}
int main( )
{
    int j, M, N, n = 1, k, result, h = 0;
    scanf("%d%d", &M, &N); 
    for (k = 1, n = 1; k <= N; n++)
    {
        result = a(n);
        if (result == 1)
            k++;
        if (result == 1 && k >= M)
            printf("%d ", n);
  }
    for ( j = M, h = 0; j <= N; j++, h++)
    {
	if (h % 10 == 0)
	    printf ("\n");
	else
	    printf (" ");
    }
    
     return 0;
}

