#include <stdio.h>
int is_pow2 (int n);

int main()
{
    int a,b;
    scanf ("%d",&a);
    b = is_pow2 (a);
    if (b == 0)
      printf("0\n");
    else
      printf("-1\n");
    return 0;
}

int is_pow2 (int n)
{
    int ys,i=1,j; 
    for (j=0;j<16;j++)
    {
      ys = n % 2;
      n = n >> 1;
      if (ys == 1)
          i--;
    }
    return i;
}
