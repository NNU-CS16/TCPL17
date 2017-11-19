#include<stdio.h>
    int countWays(int n);
    int main()
    {
         int N;
         printf ("Input the number of stair:");
         scanf ("%d", &N);
         printf ("%d\n", countWays(N) % 100007);
         return 0;
    }
    int countWays(int n)
    {
         if (n == 1)
             return 0;
         if (n == 2)
             return 1;
         if (n == 3)
             return 2;
         else
             return countWays (n - 1) + countWays (n -2);
     }
