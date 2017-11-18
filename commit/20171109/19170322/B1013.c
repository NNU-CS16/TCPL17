    #include <stdio.h>
    #include <math.h>
    int sushu(int n)
    {
        int i, k = 0;
	for(i = 1; i <= sqrt(n); i++)
	    if(n % i == 0)
	        k++;
	if(k == 1)
            return -1;
	else
	    return 1;
    }
    int main()
    {
        int m, n;
	scanf("%d %d", &m, &n);
	int j, k = 0, l = 0;
	for(j = 2; j <= 100000; j++)
	{ 
	    if(sushu(j) == -1)
	    {
	        k++;
		if(k >= m && k <= n)
		{
		    printf("%d", j);
                    l++;
		    if(l % 10 == 0)
		        printf("\n");
		    if(l != n - m + 1 && l % 10 != 0)
			printf(" ");
		}
	    }
	    if(k == n)
	        break;
	}
	return 0;
    }

