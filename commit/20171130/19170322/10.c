    #include <stdio.h>
    #include <string.h>
    int mergearray(int a[], int first, int mid, int last, int temp[])  
    {  
        int count = 0;
        int i = first;
	int n = mid;
	int j = mid + 1;
        int m = last;
	int k = last;
	while (i <= n && j <= m)
	{
	    if (a[n] < a[m])
	    {  
	        temp[k--] = a[m--];
	    }
	    else
	    {
		temp[k--] = a[n--];
		count = count + m - j + 1;
	    }
	}
	while (i <= n)
	{
	    temp[k--] = a[n--];
	}
	while (j <= m)
	{
	    temp[k--] = a[m--];
	}
	for (i = first; i <= last; i++)
        {  
	    a[i] = temp[i];
	}
	return count;
    }  
    int  mergesort(int a[], int first, int last, int temp[])    
    {    
	if (first == last)
	{
	    return 0;
	}
	else   
	{    
            int mid = (first + last) / 2;
	    int left = mergesort(a, first, mid, temp);
	    int right = mergesort(a, mid + 1, last, temp);
	    int all = mergearray(a, first, mid, last, temp);
	    return  (left + right + all);
	}    

    }  
    int main()
    {
        int a[6] = {5, 4, 2, 6, 3, 1};
	int temp[6];
	int result = mergesort(a,0,5,temp);
	printf("%d\n", result);
	return 0;
    }
