#include <stdio.h>
int main()
{
  int i,j,n;
  int a[1000];
  scanf("%d%d",&j,&i);
  n=0;
  while (n<j)
 {
    if (n+i%j<j) scanf("%d",&a[n+i%j]);
    else scanf("%d",&a[n+i%j-j]);
    n++;
 }
     printf("%d",a[0]);
  for (n=1;n<j;n++) 
     printf(" %d",a[n]); 
  printf("\n");             
  return 0;
}
