  #include <stdio.h>
  #define N 20


  int main()
  {
	int c = 0, i = 0, j = 0, r = 1, n, s;
	int a[N][N] = {0};

	scanf("%d",&n);
	
	s = n * n;
	while( r <= s)
	{
		i=0; 	j=0;

		for(i += c, j += c; j < n - c; j++)
		{
			if(r > s)  break;
			a[i][j] = r++;
		}
		for(j--, i = i + 1; i < n - c; i++)
		{
			if(r > s)  break;
			a[i][j] = r++;
		}
		for(i--,j = j - 1; j >= c; j--)
		{
			if(r > s)  break;
			a[i][j] = r++;
		}
		for(j++,i = i-1; i > c; i--)
		{
			if(r > s)  break;
			a[i][j] = r++;
		}
		c++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]); 
		
		printf("\n");
	}
	return 0;
  }
  
		
