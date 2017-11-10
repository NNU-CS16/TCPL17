ar print_hex [16] = {'0','1','2','3','4','5','6','7','8','9',
                     'A','B','C','D','E','F'};
include <stdio.h>
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
    int ys,i; // i是位数,ys是余数
    int a[100];
    char print_hex [16] = {'0','1','2','3','4','5','6','7','8','9',
                     'A','B','C','D','E','F'};
    while (n > 0)
      {
        ys = n % 16;
        a[i] = ys;
        n = n / 16;
        i++;
      }

    for ( i=i-1; i >= 0 ; i--)
      printf ("%c",print_hex[a[i]]);
}
