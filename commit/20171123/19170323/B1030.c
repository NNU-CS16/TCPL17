 #include <stdio.h>
 #define m 100000
	
 void mysort(int *str, int a, int b)
{
	int i, j, temp;
	for (i = 0; i < b-1; i++)
		for (j = 0; j < b-1-i; j++)
			if (str[j] > str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
}

 int main()
{
	int N, p, a[m], i, j, n = 1;
	scanf("%d%d", &N, &p);	
	for ( i = 0; i < N; i++)
		scanf("%d", &a[i]);
	mysort(a, 0, N);
	for ( i = 0; i < N; i++)
		for ( j = i + n; j < N; j++)
		{
			if ( a[j] <= a[i]*p)
			{
				if ( j-i+1 > n )
					n = j-i+1;
			}
			else 
				break;
		}
	printf("%d\n", n);
	return 0;
}

