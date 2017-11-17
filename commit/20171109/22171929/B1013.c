#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
    int a,n,j = 0,i = 0;
    int M,N;
    scanf("%d%d",&M,&N);
    for (n=2;j<=N;n++) 
    {
    a=is_prime(n);
    if (a==0&&j>=M)
    {
        printf("%d",n),j++;
        i++;
        if (i%10==0)
        printf("\n");
        else
        printf(" ");
    }
    else if (a==0)
    j++;
    else continue;
    }
    return 0;
}
int is_prime(int n)
{
    int i,a;
    a=sqrt(n);
    for (i=2;i<=a;i++)
    if (n%i==0)
     break;
    if (i<=a)
     return -1;
    else
    return 0;
}
