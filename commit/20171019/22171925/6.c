#include <stdio.h>
int main()
{ int a,b,c;
  printf("please input three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b)
  printf("C\n");
  else
  if(a==c)
  printf("B\n");
  else
  printf("A\n");
  return 0;
}
