    #include <stdio.h>
    #include <math.h>
    int f(int x)
    {
        int i , j;
	for(i = 1; i <= x; i++)
	{
	    if(x % i == 0)
	    {
	        j = x / i;
		if(j % 2 != 0)
		    break;
	    }
	}
	return j;
    }
    int main()
    {
        int N, i, result = 0;
	printf("please input N:");
	scanf("%d", &N);
	for(i = 1; i<=N; i++)
	    result = result + f(i);
	printf("f(1) + f(2) + ... + f(N) = %d\n", result);
	return 0;
    }
