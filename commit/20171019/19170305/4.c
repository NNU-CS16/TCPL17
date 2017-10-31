#include<stdio.h>
#include<math.h>

int main()
{
   int X,Y,N,i;
   double Z;
   scanf("%d",&N);
   if(N<=0||N>10000)
      printf("Wrong!\n");
   else
   {
      for(i=0,X=1;X<=sqrt(N/2);X++)
      {
         Y=sqrt(N-X*X);
         Z=sqrt(N-X*X);
      
         if(fabs(Y-Z)<0.000001)
         {
            i++;
            printf("%d %d\n",X,Y);
         }
         else
            i=i; 

      }
         if(i==0)
            printf("No solution!\n");
      
   }
return 0;
}
