#include <stdio.h>
int GCD_recursive(int m,int n);
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    GCD_recursive(a,b);
    return 0;
}
  int GCD_recursive(int m,int n)
 {
   int i = m%n;

  while (i != 0)
{
    m=n;
    n=i;
    i=m%n; 
}

    printf("%d", n);
 }
   
