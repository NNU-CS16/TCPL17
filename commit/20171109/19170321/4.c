#include <stdio.h>
    int countWays(int n,int z);
    int i, a ;

    int main()
    {
         int N, Z;
         printf ("input N, Z\n");
         scanf ("%d%d", &N, &Z);
         printf ("%d\n", countWays(N, Z) % 10007);
         return 0;
    }
    int countWays(int n, int z)
    {
        a = 0;
        if (z == 1)
           return 0;
        else
        {
        if (n <= 2)
           return n;
        if (n <= z)
            return 2 * countWays(n - 1,z - 1);
        if (n > z)
            for (i = 1; i <= z; i++)
            {
                a =  a + countWays(n - i,z);
                return a;
            } 
         }
    }
