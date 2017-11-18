#include <stdio.h>
int is_prime(int n);

int main()
{
    int n,M,N,j=0,x=0;
    scanf("%d%d",&M,&N);
    for (n=1;j<=N;n++)
    {
        if (is_prime(n)==0)
        {
            j++;
            if (j>=M&&j<=N)
            {
                printf("%d",n);
                x++;
                if (x%10!=0)
                    printf(" ");
                else
                    printf("\n");
             }
        }
    }
    return 0;
}

int is_prime(int n)
{
    int i;
    if (n<2)
        return -1;
    if (n==2)
        return 0;
    if ((n&1)==0)
        return -1;
    for (i=3;i*i<=n;i+=2)
    {
         if (n%i==0)
             return -1;
    }
    return 0;
}
