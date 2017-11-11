  #include<stdio.h>
  int fac_bit_count(int n);

  int n;
  int main()
  {	
	printf("输入n:");
	scanf("%d", &n);
	fac_bit_count(n);
	return 0;
  }

  int fac_bit_count(int n)
  {
	int i = 1;
	int N = 1;
	for (i = 1;i <= n; i++)
		{
		N = N*i;
		}
	int temp;
	int cnt = 0;
	while (N != 0)
	{
	  temp = n/10;
	  if (temp >= 0)
		{
		 cnt++;
		}
	  N = N/10;
	}
	printf("%d\n", cnt);
  }
