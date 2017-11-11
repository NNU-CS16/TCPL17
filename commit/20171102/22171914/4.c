#include <stdio.h>
int count1_in_bin;

{
  int n,x;
  scanf("%d",&n);
  x=0;
  while(n)
  {
   if(n%2==1)
   x++;
   n/=2;
  }

  printf("%d",x);
  return 0;
}









   
 
