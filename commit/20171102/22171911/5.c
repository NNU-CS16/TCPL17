  #include <stdio.h>
  int fac_bit_count(int n)
  {
    int m = 1, i = 0;
    while (n != 1)
    {
        m = m*n;
        n--;
    }
    while (m != 0)
    {
        m = m/10;
        i++;
    }
    printf ("%d", i);
    }
   int main( )
    {
      int n;
      scanf ("%d",&n);
      fac_bit_count(n);
      return 0;
    }



