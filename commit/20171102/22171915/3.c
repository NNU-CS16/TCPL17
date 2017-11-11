  #include <stdio.h>
  int is_pow2(int n);

  int n;
  int main()
	{
	scanf("%d", &n);
	is_pow2(n);  
	printf("%d\n", is_pow2(n));
	return 0;
	}

  int is_pow2(int n)
	{
	  while (n > 2)
	  {
      n = n/2;
	  }
	  if (n == 1)
	  return -1;
	  else
	  return 0;
	 }
	
