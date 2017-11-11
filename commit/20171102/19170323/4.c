 #include <stdio.h>

 int count1_in_bin(int n)
{
	int m, count = 0;
	do
	{
		m = n%2;
		n = n/2;
		if (m == 1)
        {
			count++;
        }
    }while (n != 0);

	return count;
}

 int main()
{
	int a, b;
	scanf("%d", &a);
	b = count1_in_bin(a);
	printf("%d\n", b);

	return 0;
}
