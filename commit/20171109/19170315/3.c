  #include <stdio.h>
  int Fib(int N);
  
  int main()
  {
      int N;
      scanf("%d",&N);
      int i = Fib(N);
      printf("%d\n",i);
      return 0;
  }

  int Fib(int n)
  {
      if(n == 1)
          return 1;
      if(n == 2)
          return 2;
      return Fib(n - 1) + Fib(n - 2);
  }
