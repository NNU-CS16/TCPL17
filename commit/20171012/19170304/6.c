#include<stdio.h>
int main()
{
    int i,j,k,N,a,b,c;

    printf("Please input the number of row:");
    scanf("%d",&N);


    if(N>=13) printf("error");
    else
    {

      for(i=1;i<=N;i++)
         {

          for(j=1;j<=10-i;j++)
             printf(" ");
          for(k=1;k<=2*i-1;k++)
             printf("*");
          printf("\n");
         }
      for(a=N-1;a>=1;a--)
         {

          for(b=1;b<=10-a;b++)
             printf(" ");
          for(c=1;c<=2*a-1;c++)
             printf("*");
          printf("\n");
         }
     }
     return 0;
}
      

         
