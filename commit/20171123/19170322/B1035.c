    #include<stdio.h>
    void Insertion(int *num,int k,int len) 
    {
        if(k >= len)
	    k = len - 1;
	int temp = num[k];
	for(int i = k - 1; i >= 0; i--)
	{
	    if(num[i] > temp)
	        num[i + 1] = num[i],
		num[i] = temp;
	    else
		break;
	}
    }
    void Merge(int *num,int k,int len)
    {
        if(k >= len)
	    k = len;
	int start = 0, end = 0;
        for(int i = 0; i < len; )
	{
	    start = i;
	    end = (start + k > len ? len : start + k);
	    for(int m = end - 1; m >= start; m--)
	    {
	        int iloc = -1, max = num[start], l = 0;
		for(l = start; l <= m; l++)
		    if(num[l] >= max)
		        iloc = l, max = num[l];
		if(iloc >= 0)
		    num[iloc] = num[l - 1], num[l - 1] = max;
	    }
	    i += k;
	}
    }
    int match(int *num0, int *num3, int len)
    {
        for(int i = 0; i < len; i++)
            if(num0[i] != num3[i])
	        return 0;
	return 1;
    }
    int main()
    {
        int n = 0;
	int num[100] = {0};
        int num0[100] = {0};
	int num1[100] = {0};
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	    scanf("%d", &num[i]);
	for(int i = 0; i < n; i++)
	    scanf("%d", &num0[i]);
	for(int i = 0; i < n; i++)
	    num1[i] = num[i];
	for(int i = 1; i < n; i++)
	{
	    Insertion(num1, i, n);
	    if(match(num0, num1, n))
	    {
	        printf("Insertion Sort\n");
		Insertion(num1, i + 1, n);
		for(int j = 0; j < n; j++)
		{
		    if(j == n - 1)
		        printf("%d", num1[j]);
		    else
			printf("%d ", num1[j]);
		}
		return 0;
	    }
	}
	for(int i = 0; i < n; i++)
	    num1[i] = num[i];
        for(int i = 1; ; )
	{
	    Merge(num1, i, n);
	    if(match(num0, num1, n))
	    {
	        printf("Merge Sort\n");
		Merge(num1, i * 2, n);
		for(int j = 0; j < n; j++)
		{   
		    if(j == n - 1)
		        printf("%d", num1[j]);
		    else
			printf("%d ", num1[j]);
		}
		return 0;
	    }
	    i *= 2;
	    if(i > 2 * n)
	        break;
       }
       return 0;
    }
