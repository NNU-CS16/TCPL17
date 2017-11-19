    #include <stdio.h>
    int BinomialCoefficient(int n, int k)
    {
	if(n == 2 && k==1)
	    return 2;
	if(n == k || k == 0)
	    return 1;
        if(n != 2 && n != k && k != 0)
	    return BinomialCoefficient(n-1, k - 1) + BinomialCoefficient(n - 1, k);
    }
    int main()
    {
        int n, k;
	scanf("%d %d",&n,&k);
	printf("%d",BinomialCoefficient(n, k));
	return 0;
    }
