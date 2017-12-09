#include <stdio.h>
int sum(int n)
  {
      int k;
      k = n;
      n && (k = k + sum(n-1));
      return k;
  }

int main()
  {
      int a,n;
      scanf("%d", &n);
      a = sum(n);
      printf("%d\n", a);
      return 0;
  }
