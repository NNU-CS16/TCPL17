#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,k=0;
  int a[1000];
  scanf("%d%d",&j,&i);

  while(k<j)
  {
    if(k+i%j<j)
    printf("%d",&a[k+i%j]);
  
    else
    printf("%d",&a[k+i%j-j]);
    k++;
  
   }

  printf("%d",a[0]);
  
  for(k=1;k<j;k++)
  printf("%d",a[k]);
 
  return 0;
}
