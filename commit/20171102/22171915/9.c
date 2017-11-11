  #include<stdio.h>
  int is_int_pal(int n);

  int n;
  int main()
  {
  printf("输入;");
  scanf("%d", &n);
  printf("%d\n", is_int_pal(n));
  return 0;
  }

  int is_int_pal(int n)
  {
  int m=n,i=0;
  while (m != 0)
  {
	  i = i * 10 + m%10;
	  m = m / 10;
  }
  if (i == n)
		return 0;
  else
		return -1;
  }

