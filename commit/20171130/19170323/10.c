 #include <stdio.h>

 int main()
{	
	int n, str[40001], i, j, count = 0;
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &str[i]);
	}
	
	for (i = 0; i < n; i++)
		for (j = i+1; j < n; j++)
		{
			if (str[i] > str[j])
				count++;
		}
	printf("%d\n", count);
	return 0;
}
