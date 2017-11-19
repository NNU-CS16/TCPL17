nclude <stdio.h>
#include <math.h>
int sushu (int n);

int sushu (int n)
{
     int i;
     for (i = 2; i <= sqrt(n); i++)
      {
          if (n % i == 0)
              return 0;
      }
      return 1;
}

int main ()
{
    int N , M;
    int n = 2 , count = 1;
    int dy = 1;
    scanf ("%d%d" , &M , &N);

    while (count <= N)
    {
        if (sushu(n))
        {
            if (count >= M)
            {
                printf ("%d", n);
                if (dy != N - M + 1)
                {
                    if (dy % 10 == 0)
                        printf ("\n");
                    else
                        printf (" ");
                }
                dy ++;
            }
            count ++;
        }
        n++;
    }

    return 0;
}



