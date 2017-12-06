#include <stdio.h>
int add(int n1, int n2);

int main()
{
  int n1, n2;
  scanf("%d%d", &n1, &n2);
  printf("%d\n",add(n1, n2));
  return 0;
}

int add(int n1, int n2)
{
  int m, z;
  if(n1 == 0)
   return n2;
  if(n2 == 0)
   return n1;
  else
   m=n1^n2;
   z=(n1&n2)<<1;
   return add(m,z);
}
