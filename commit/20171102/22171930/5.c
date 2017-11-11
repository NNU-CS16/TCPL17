#include <stdio.h>
int fac_bit_count(int n);
int main()
{
    int n;
    scanf("%d", &n);
    fac_bit_count(n);
    return 0;
}
  int fac_bit_count(int n)
{
   int i, j, k = 1;
   j = 1;
   for (i = 2; i <= n; i++)
{
    j*=i;
   while (j >= 10) 
   j/=10,k++;
}
  printf("%d\n", k);
}  
 
