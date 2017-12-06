  #include <stdio.h>
  int bin_insert(int n, int m, int j, int i) ;

  int main()
  {
      int n, m, j, i;
      scanf("%d %d",&n,&m);
      scanf("%d %d",&j,&i);
      int x = bin_insert(n, m, j, i);
      printf("%d\n",x);
      return 0;
  }

  int bin_insert(int n, int m, int j, int i)
  {
      int p = 0, q = 0;
      int a[32], b[32];
      while(n > 0)
      {
          a[p] = n % 2;
          n /= 2;
          p++;
      }
      while(m > 0)
      {
          b[q] = m % 2;
          m /= 2;
          q++;
      }
      int s , d;
      for (s = j, d = 0; s <= i, d < q; s++, d++)
      {
          a[s] = b[d];
      }
      int R = 0, y = 1;
      for (s = 0; s < p; s++)
      {
          R += y * a[s];
          y *= 2;
      }
      return R;
  }
     
