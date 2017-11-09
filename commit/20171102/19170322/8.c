    #include <stdio.h>
    int GCD_iterative(int m, int n)
    {
        int i, j;
	if(m < n)
	{
	    i = m;
	    m = n;
	    n = i;
	}
	while(n != 0)
        {
	    j = m;
	    m = n;
	    n = j % n;
        }
	return m;
    }
    int LCM(int m, int n)
    {
        int result;
        result = m * n / (GCD_iterative(m, n));
        return result;
    }
    int main()
    {
        int m, n;
        printf("input m, n:");
        scanf("%d %d", &m, &n);
        printf("m, n的最小共倍数：%d\n", LCM(m, n));
        return 0;
    }
