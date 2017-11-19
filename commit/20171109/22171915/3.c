  #include <stdio.h>
  int step(int n, int a, int b);

  int main()
  {
      int n;
	  printf("输入n:");
	  scanf("%d", &n);
	  printf("%d\n" ,step(n,1,2));
	  return 0;
  }

  int step(int n, int a, int b)
  {
	  if (n == 1)
	  {
		  return a;
	  }
	  else if (n == 2)
	  {
		  return b;
	  }
      else
	  {
		  return step(n-1, b%100007, (a+b)%100007);
	  }
  }

