#include <stdio.h>
#include <math.h>
int main()
{
     int X,Y,N,i=0;
     X>0;
     Y>0;
     printf("请输入正整数N(N<=10000): ");
     scanf("%d",&N);
     for(X=1;X<sqrt(N);X++)
      for(Y=X;Y<sqrt(N);Y++)
       if(X*X+Y*Y==N)
       {
         printf("%d %d\n",X,Y);
         i=1;
       }
     if(i==0)
     printf("No Solution\n");
    return 0;
}

      
