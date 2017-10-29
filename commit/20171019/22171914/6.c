#include <stdio.h>
int main()
{
  int m,n,l;
  scanf("%d%d%d",&m,&n,&l);
  if(m==n)
  printf("C\n");
  else
  {
    if(m==l)
    printf("B\n");
    else
    printf("A\n");
  }
  return 0;
}
