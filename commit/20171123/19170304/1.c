#include <stdio.h>

int main()
{
    int N,i,j,max,MAX=0;
    printf("Please input a number:");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                if (j%2!=0)
                    max=j;
            }
         }
         MAX=max+MAX;
     }
     printf("%d\n",MAX);
     return 0;
}
