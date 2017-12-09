  #include <stdio.h>
  int sum(int n);
  
  int main()
  {
      int n;
      scanf("%d",&n);
      int x = sum(n);
      printf("%d\n",x);
      return 0;
  }
  
  int sum(int n)
  {
      int result;
      (n > 0) && (result = sum(n - 1) + n);
      return result;
  }
