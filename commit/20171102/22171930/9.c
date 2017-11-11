#include <stdio.h>
#include <string.h>
int is_int_pal(int n);
int main()
{
    int n,a;
    scanf("%d", &n);
    a=is_int_pal(n);
    printf("%d", a);
    return 0;
}
 int is_int_pal(int n)
{
    int i,j,a;
    j = 0;
    a = n;
   while (n>0)
  {
      i = n%10;
      j = j*10 + i;
      n=n/10 ;
  }
  if (a==j)
  return 0;
  else return -1;
}
  
  
 
