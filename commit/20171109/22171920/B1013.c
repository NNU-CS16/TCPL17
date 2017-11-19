#include <stdio.h>
#include <math.h>
int prime(int n)
 {
   int m;
   for (m=2; m<=sqrt(n); m++)
   {
    if (n%m==0)
      return 0;
   }
  return 1;
 }

int main(void)
{
    int i, M, N, count=1;
    int output[10000];
    scanf("%d %d",&M,&N);
    for (i=0; i<N; i++)
    {
       count++;
       while (!prime(count))
       {
           count++;
       }
       output[i]=count;
    }
    for (i=M; i<N; i++)
    {
        printf("%d",output[i-1]);
        printf((i - M + 1) % 10 ? " " : "\n");
    }
    printf("%d",output[N-1]);
    printf("\n");
    return 0;
}
