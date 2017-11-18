   #include <stdio.h>
   int ways(int n, int a, int b);

   int main()
   {
      int n,k;
      printf("Please input a number between 1 and 1000\n");
      scanf("%d", &n);
      k = ways(n, 1, 2);
      printf("%d\n", k);
      return 0;
   }

   int ways(int n, int a, int b)
   {
      if (n == 1)
          return a;
      if (n == 2)
          return b;
      else return ways(n-1, b, a+b);
   }

