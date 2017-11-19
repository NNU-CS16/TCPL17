 #include  <stdio.h>
 int H(int n);

 int main()
 {
	 int n, m;
	 printf("输入n:");
	 scanf("%d", &n);
	 printf("%d\n", H(n));
	 return 0;
 }
  int H(int n)
 {
	 if (n == 1)
		 return 2;
	 else if (n == 2)
		 return 6;
	 else if (n >= 3)
		 return 2 * H(n - 1) + 2;
 }
