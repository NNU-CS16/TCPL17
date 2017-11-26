 #include <stdio.h>
 #include <string.h>

 int main()
{
	int A, B;
	char a[1000], b[1000];
	char str[1001];
	scanf("%s%s", a, b);
	
	int i, e, d, n, m;
	char temp;
	n = strlen(a);
	m = strlen(b);
	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
	for (i = 0; i < m/2; i++)
	{
		temp = b[i];
		b[i] = b[m-1-i];
		b[m-1-i] = temp;
	}
		e = 0;
	for (i = 0; i < n&&i < m; i++)
	{
		d = a[i]-'0' + b[i]-'0' + e;
		e = d/10;
		str[i] = d%10 + '0';
	}
	if (i < m)
	{
		for ( ; i < m; i++)
		{
			d = b[i]-'0' + e;
			e = d/10;
			str[i] = d%10 +'0';
		}
	}
	else 
	{
		for ( ; i < n; i++)
		{
			d = a[i]-'0' + e;
			e = d/10;
			str[i] = d%10 + '0';
		}
	}
	if (e == 1)
		str[i++] = e +'0';
		str[i] = '\0';
		n = i;
	for (i = 0; i < n/2; i++)
	{
		temp = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = temp;
	}
	printf("%s\n", str);
	return 0;
}
