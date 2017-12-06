#include<stdio.h>
int main()
{
  int n,N,j,sum,i;
  printf("please input N=");
  scanf("%d\n",&N);
  for(j=0;j<N;j++)
  {
     n=j%2;
     i=j/2;
     while(n==0)
         if(i%2==0)
               i=j/2;
         if(i%2!=0)
               n=i;
     whlie(n!=0); 
         n=n;
   }
   sum=n+sum;
   printf("%d\n",sum);
return 0;
}
