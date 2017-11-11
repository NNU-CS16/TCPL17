#include <stdio.h>
int GCD_recursive(int m, int n)
{
      if (m % n > 0)
        return GCD_recursive(n, m % n);
      else 
        return n;
}
 
int GCD_iterative (int m, int n)
{
      int i;
      i = m % n;
     while (i)
   {
     m=n;
     n=i;
     i=m%n;
   }
     return n;
}

int main ()
{
    int m, n;
    scanf("%d%d",&m,&n);
    printf("%d %d\n", GCD_recursive(m,n), GCD_iterative(m,n));
    
    return 0;
}
