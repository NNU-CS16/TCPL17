#include <stdio.h>
    #include <math.h>
    int prime(int x);
    int main()
    {
        int m, n, x = 1,count = 0;
        scanf ("%d %d", &m, &n);

        while (1)
        {
            x ++;
            if (count > n)
               break;
            if (prime(x))
            {
                count++;
                if (count >= m && count < n )
                {
                     if ((count -m +1) % 10 != 0)
                        printf ("%d ",x);
                     else
                        printf ("%d\n",x);
                 }
                if (count == n)
                    printf ("%d\n",x);
             }
        }
        return 0;
    }
    int prime(int x)
    {
      int i;
      if (x == 2)
          return 1;
      else
      {
          for (i = 2; i <= sqrt(x); i++)
               if (x % i == 0)
                   return 0;
          return 1;
     }
     }
