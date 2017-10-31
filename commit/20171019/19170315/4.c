#include <stdio.h>
int main()
{
int X, Y, N, flag=0;
printf("Please input a positive integer N(N<=10000): ");
scanf("%d",&N);
  
int half=N/2;
for(X=1;X<=half;X++)
   {
   for(Y=X;Y<=half;Y++)
      {
      if(X*X+Y*Y==N)
        {
         flag=1;
         printf("%d %d\n",X,Y);
        }
      }
   }
if(!flag)
   printf("No solution");
return 0;
}
