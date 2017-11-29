    #include <stdio.h>
    #include <math.h>
    void BubbleSort(int arr[], int left, int right)
    {   
        int temp;
	int i, j;
	for(i = left - 1; i <= right -1; i++)
	{
	    for(j = i + 1; j <= right - 1; j++)
	    {
	        if(arr[i] > arr[j])
		{
		    temp = arr[i];
		    arr[i] = arr[j];
		    arr[j] = temp;
		}
	    }
	}
    }
    int main()
    {
	int a[1000][1000] = {0}, s[1000] = {0};
        int s1[1000];
	int n, i, j, x, y, r, c, num, min = 999;
	printf("please input n:");
	scanf("%d", &n);
	printf("please input s[]:");
	for(i = 0; i < n; i++)
	    scanf("%d ", &s[i]);
	BubbleSort(s, 1, n);
        for(j = n - 1, i = 0; j >= 0; j--, i++)
	    s1[i] = s[j];
	for(i = 1; i <= sqrt(n); i++)
	{
            if(n % i == 0)
	    {
	        if(n / i - i < min)
		{
		    min = n / i - i;
	            r = i;
		}
	    }        
	}
	c = n / r;
	a[0][0] = s[0];
	num = x = y = 0;
	while(min < r * c - 1)
	{
	    while(y + 1 < r && !a[x][y + 1])
		a[x][++y] = s[++num];
	    while(x + 1 < c && !a[x + 1][y])
		a[++x][y] = s[++num];
	    while(y - 1 >= 0 && !a[x][y - 1])
		a[x][--y] = s[++num];
	    while(x - 1 >= 0 && !a[x - 1][y])
		a[--x][y] = s[++num];
	}
	for(i = 0; i < c; i++)
	{
	    printf("%d", a[i][0]);
            for(j = 1; j < r; j++)
	    {
	        printf(" %d", a[i][j]);
            }
	    printf("\n");    
	}
	return 0;
    }
