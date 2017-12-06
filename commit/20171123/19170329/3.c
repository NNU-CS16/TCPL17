  #include <stdio.h>
  int sum( int n);

  int main()
  {
	int n;

	scanf("%d", &n);
	printf("%d\n", sum ( n ));

	return 0;
  }

  int sum (int n)
  {
	n && (n += sum ( n - 1));
	return  n;
  }
