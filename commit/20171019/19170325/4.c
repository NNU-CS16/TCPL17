#include<stdio.h>
#include<math.h>

int main()
{
  int i,j,n,k=0;

  printf("please input N(N<=10000):\n");

  scanf("%d",&n);

  for(i=1;i<=sqrt(n/2);i++)

     for(j=99;j>=sqrt(n/2);j--)

       if(i*i+j*j==n)

         {

             printf("%d %d\n",i,j);

             k=1;
         }

   if(k==0)

     printf("NO Solution\n");

   return 0;


}
