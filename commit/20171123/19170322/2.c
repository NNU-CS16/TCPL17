    #include <stdio.h>
    int cifang(int x, int y)
    {
        int result = 1;
	for(int i = 1; i <= y; i++)
	    result = result * x;
	return result;
    }
    int bin_insert(int N, int M, int j, int i)
    {
	int x = 0, y = 0, n[100] = {0}, m[100] = {0}, m1[100] = {0};
	int temp, result = 0;
	while(N != 0)
	{
	    n[x] = N % 2;
	    N =  (N - N % 2) / 2;
	    x++;
	}
	x = 0;
	while(M != 0)
	{
	    m1[x] = M % 2;
	    M = (M - M % 2) / 2;
	    x++;
	}
	x--;
	temp = x;
	for(y = 0; y <= temp; y++, x--)
	{
	    m[y] = m1[x];
	}
	for(x = j, y = 0; x <= i; x++, y++)
	{
	    n[x] = m[y];
	}
	for(x = 0; x <= 99; x++)
	    n[x] = n[x] * cifang(2, x);
	for(x = 0; x <= 99; x++)
	    result = result + n[x];
        return result;
    }
    int main()
    {
        int n, m, j, i;
	printf("please input n:");
	scanf("%d", &n);
	printf("please input m:");
	scanf("%d", &m);
	printf("please input j:");
	scanf("%d", &j);
	printf("please input i:");
	scanf("%d", &i);
	printf("%d\n", bin_insert(n, m, j, i));
	return 0;
    }
