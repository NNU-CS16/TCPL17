  #include<stdio.h>
  int LCM(int m, int n);
  int GCD_recursive(int m, int n);

  int m, n, q;
  int main()
  {
	  printf("输入m,n:");
	  scanf("%d %d", &m,&n);
	  q=GCD_recursive(m, n);
	  LCM(m, n);
	  return 0;
  }

  int GCD_recursive(int m, int n)
  {
	  if (m%n > 0)
	  return GCD_recursive(n, m%n);
	  else
	  return n;
  }

  int LCM(int m, int n)
  {
  printf("最小公倍数:%d\n", m*n*q);
  }

  
