#include <stdio.h>
int jys (int n);

int main ()
{
    int n , i , k , sum = 0;
    printf ("输入n值:");
    scanf ("%d" , &n);
    for (i = 1; i <= n; i++)
    {   
	k = jys (i);
	sum = sum + k;
    }
    printf ("%d\n" , sum);
    return 0;
}

int jys (int n)
{
    int i;
    if (n % 2 != 0)
    {
	for (i = n; i >=1; i = i - 2)
	{
	    if (n % i == 0)
               break;
        }
        return i;
    }

    else
    {
        for (i = n - 1; i >= 1; i = i -2)
	{
	    if (n % i == 0)
               break;
        }
        return i;
    }
}
	
    
