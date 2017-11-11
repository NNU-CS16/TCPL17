#include <stdio.h>

int is_prime(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    i = is_prime(n);
    printf("%d\n", i);
    
    int count = 0;
    for (n = 2; count <= 1000; n++)
    {
        for (i = 2;i * i <= n;i++)
        { 
	    if (n % i == 0)
  	    break;
        }
        if (i * i > n)
        {
	    count++;
            if (count >= 100 && count <= 1000)
	        printf("%d\n",n);
        }
    }
    return 0;
}

int is_prime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            break;
    if (i * i <= n)    
        return -1;
    else
        return 0;
}
