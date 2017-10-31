#include <stdio.h>
#include <math.h>
int main()

{

    int N,X,Y,flag=0;

    printf("Please enter a positive interge N(N<=1000):");

    scanf("%d",&N);

    for (X=1;X<sqrt(N);X++)
      for (Y=X;Y<sqrt(N);Y++)

       if (X*X+Y*Y==N)

       {
         printf("%d %d\n",X,Y);
         flag=1;
       }
    if (flag==0) printf("No Solution\n");

    return 0;
}

