 #include <stdio.h>
 #include <string.h>

 int main()
{
	char str[100];
	int i, m, sum = 0;
	fgets(str, 100, stdin);
	m = strlen(str);
	for (i = 0; i < m; i++)
	{
		if (str[i] >='a' && str[i] <= 'z')
			sum += str[i] - 'a'+1;
			else if (str[i] >='A' && str[i] <= 'Z')
				sum += str[i] - 'A'+1;
			else continue;
	}
	printf("%d\n",sum);
	int a, b=1, c=0, count1 = 0, count2 = 0;
	while(sum != 0)
	{
		a = sum%2;
		if (a == 0)
			count1++;
		else 
			count2++;
		sum = sum/2;
		c += a*b;
		b *= 10;
	}
	printf("%d %d\n", count1, count2);
	printf("%d\n", c);
	return 0;
}
