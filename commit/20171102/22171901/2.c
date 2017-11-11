#include <stdio.h>
void print_hex (int a);

int main ()
{   
    int n;
    scanf ("%d",&n);
    print_hex (n);
    return 0;
}

void print_hex (int n)
{
    int ys,i;
    int a[100];
    char A ,B ,C ,D ,E ,F;
    for (i = 0; n != 0; i++)
      {
        ys = n % 16;
        n = n / 16;
        switch (ys)
        {
          case 10:  a[i] = A;
          case 11:  a[i] = B;
          case 12:  a[i] = C;
          case 13:  a[i] = D;
          case 14:  a[i] = E;
          case 15:  a[i] = F;
          default:  a[i] = ys;
        }
      }

    for ( i=i-1; i >= 0 ; i--)
      printf ("%c",a[i]);
}
