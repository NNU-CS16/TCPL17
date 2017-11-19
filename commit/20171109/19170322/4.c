    #include <stdio.h>
    int quantity(int n, int k)
    {
	int i, result = 0;    
        if(n == 1)
	    return 1;
	else
	    if(n <= k + 1)
	        for(i = 1; i <= n - 1; i++)
		    result = result + quantity(i, k);
	    if(n > k+1)
	        for(i = 1; i <= k; i++)
		    result = result + quantity(n - i, k);
	    return result;
    }
    int main()
    {
        int n, k;
	printf("please input n:");
	scanf("%d", &n);
	printf("please input k:");
	scanf("%d", &k);
	printf("%d\n", quantity(n + 1, k) % 100007);
        return 0;
    }
