#include <stdio.h>
int main()
{
  int a,b,c;

  scanf("%d%d%d",&a,&b,&c);

  if (a==b) printf("C\n");
  if (b==c) printf("A\n");
  if (a==c) printf("B\n"); 
  return 0;

}
