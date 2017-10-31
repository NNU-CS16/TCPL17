#include<stdio.h>
int main()
{
  int x,y,m,N,i,j,k,c;
  scanf("%d",N);
  for(i=1,j=1;j<N;i++) j=2*i+j;k=N-j;
   for(x=i-2;x>=1;x--)
    {
      for(y=x;y<=19;y++) printf(" ");
      for(m=1;m<=2*x-1;m++) printf("*");
      printf("\n");
    }
  for(x=1;x<=i-2;x++)
    {
     for(y=1;y<=20-x;y++) printf(" ");
     for(m=1;m<=2*x-1;m++) printf("*");
     printf("\n");
    }
   printf("%d\n",k);
   return 0;
}
     
 
