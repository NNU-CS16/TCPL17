#include <stdio.h>
int main()
{
  int x, i, j, m, n, p, z, a[4];
  scanf( " %d ", &x );
  do
  {
    for ( i=0; i<=3; i++)
    {
      a[i] = x % 10;
      x = x/10;
    }
    for ( i=0; i<=3; i++)
    for ( j=0; j<=2; j++)
    {
       if ( a[j] > a[j+1] )
       {
          z = a[j];
          a[j] = a[j+1];
          a[j+1] = z;
       }
    }
    m = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
    n = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
    p = m-n;
    x = p;
    printf("%04d-%04d=%04d\n", m, n, p );
  }
  while(p != 6174 && p != 0);
  return 0;
}
