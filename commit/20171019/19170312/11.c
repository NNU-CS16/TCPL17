#include <stdio.h>
int main()
{
 int s=1,i,j,k;
 scanf("%d",&k);
 printf("1\n");
 for(i=2;i<=k;i++)
 {
  printf("1\t");
  for(j=1;j<=i-2;j++)
  printf("%d\t",(s=(i-j)*s/j));
  printf("1\n");
  s=1;
 }
  getchar();
  return 0;
}
