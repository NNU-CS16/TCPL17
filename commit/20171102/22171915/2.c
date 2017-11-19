  #include<stdio.h>
  void print_hex(int n);
  int n;
  int main()
	{
	printf("输入一个十进制整数:");
	scanf("%d", &n);
	print_hex(n);
	return 0;
	}

	void print_hex(int n)
	{
    int a[50];
	char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i=0;
    int rem, temp;
	while (n > 0)
	  {
	  rem = n%16;
	  a[i] = rem;
	  i++;
	  n = n/16;
	  }
	printf("其十六进制为:");
	for (i = i-1; i >= 0; i--)
	  {
	  temp = a[i];
	  printf("%c", hex[temp]);
	  }
	printf("\n");
	}
