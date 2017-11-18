    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char c[100000];
	gets(c);
	int sum = 0, i;
	for(i = 0; i< strlen(c); i++)
	{
	    if(c[i] >= 'A' && c[i] <= 'Z')
	        sum = sum + c[i] - 64;
	    if(c[i] >= 'a' && c[i] <= 'z')
		sum = sum + c[i] - 96;
	}
	int a[100000];
	for(i=0; i<10000; i++)
	{
	    a[i] = sum % 2;
	    sum = (sum - a[i]) / 2;
	    if(sum == 0)
	        break;
	}
	int n1 = 0, n0 = 0;
	for(i; i >= 0; i--)
	{
	    if(a[i] == 1)
	        n1++;
	    if(a[i] == 0)
		n0++;
	}
	printf("%d %d", n0, n1);
	return 0;
    }
