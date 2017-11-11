#include <stdio.h>
int count1_in_bin(int n);
int main()
{
	int n;
	int count1;
	scanf("%d",&n);
	count1 = count1_in_bin(n);
	printf("count1=%d\n",count1);
	return 0;
}

int count1_in_bin(int n)
{
	int m,count1 = 0;
	while (n>0)
	{
		m = n % 2;
		if (m == 1)
			count1++;
		n = n / 2;
	}
        return count1;
}


