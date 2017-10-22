#include<stdio.h>
int main(void)
{
    int i;

    int N,j,k; 
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {

       for(j=1;j<=N-i-1;j++) 
       printf(" ");
       for(k=1;k<=2*i+1;k++)
       printf("*");
       printf("\n"); 
    }
    for(i=0;i<=N-1;i++)
    {
       for(j=1;j<=i+1;j++)
       printf(" ");
       for(k=1;k<=2*(N-1-i)-1;k++)
       printf("*");
       printf("\n");
    }
    return 0;
}

    
    

