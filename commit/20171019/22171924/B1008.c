#include <stdio.h>
int main()
{
  
    int M,N;
    int i=0;
    int a[1000];
    scanf("%d%d",&M,&N);
  
    while (i<N)
    {
     if (i+M%N<N) scanf("%d",&a[i+M%N]);
     else scanf("%d",&a[i+M%N-N]);
     i++;
     }
    
     printf("%d",a[0]);
  
     for (i=1;i<N;i++) printf(" %d",a[i]);             
     return 0;
}
