#include <stdio.h>
int main()
{
  int i,j,k,N,x,y,z;
  printf("N=");
  scanf("%d",&N);

  for(i=1;i<=N-1;i++)
  {  for(j=N-i;j>=0;j--)
	 printf(" ");
     for(k=0;k<=2*i-2;k++)
         printf("*");
    printf("\n");}    
  for(i=N;i>0;i--) 
  {  for(x=N-i+1;x>=1;x--)
	 printf(" ");
      for(y=0;y<2*i-1;y++)
	 printf("*");
    printf("\n");
  }
return 0;
}


	
