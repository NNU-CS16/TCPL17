#include <stdio.h>
#include <math.h>
int is_prime(int n);
int main()
{
    int n, i = 1;
    n = 2;
    is_prime(n);
    for ( i= 1;i < 100;)
{
    if (is_prime(n)) 
    i++,
    n++;
    else n++;
}
    for (i = 100;i <= 1000;)
  {
    if(is_prime(n))
    printf("%d\t",n),
    n++,
    i++;
    else n++;
  } 
  return 0;
}
  int is_prime(int n)
{
    int m;
  for (m = 2;m <= sqrt(n); m++)
   {
    if(n%m == 0)
   }
    return 0; 
}
    return -1;
  
}
