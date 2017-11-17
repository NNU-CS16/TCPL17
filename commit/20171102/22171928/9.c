#include <stdio.h>
int is_int_pal(long int n);
int main()
{
    int n, m;
    scanf("%d", &n);
    m = is_int_pal(n);
    printf("%d\n", m);
    return 0;
}
int is_int_pal (int n)
{
    int a [ 32 ] , i = 0, b = 0, c = 0;
    for (i = 0; ; )
    { 
        a [ i ] = n % 10;
        n = n / 10;
        i++;
        if ( n == 0)
            break;\
     }
        i--;
    for (b = 0;b <= i / 2;b++)
    {
      if (a [ c ] != a [ i ])
         return -1;
      if (a [ c ] == a [ i ] )
        {
         if (b >= (i - 1) / 2)
         return 0;
         else
        {
                i--, c++;
        }
    }
  }
}
