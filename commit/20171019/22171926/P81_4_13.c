#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,flag=1;
    printf("Input n(n>3): ");
    scanf("%d",&n);

    for (i=2;i<=sqrt(n);i++) if (n%i==0) flag=0;

    if (flag) printf("%d is a prime number\n",n);
    else printf("%d is not a prime number\n",n);

    return 0;

}
