#include <stdio.h>
int is_pow2(int n)
{
  double a;
  for ( ;a<2; )
   {
    a=n/2;
   }
  if (a==1) 
     return 0;
  else 
     return -1;
}
int main()
{
  int n;
  scanf ("%d",&n);
  printf ("%d\n",is_pow2(n));
  return 0;
}
