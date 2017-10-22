#include <stdio.h>
int main()
{ 
  int i,j,k,n;
  printf("Please input the number of row:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  printf("%s","");
 { 
 for(j=0;j<2*n+1;j++)
  printf("%s","*");
  printf("\n");

 }
 return 0;
} 
  
