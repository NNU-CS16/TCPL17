#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i;
    printf("input n(n>3):");
    scanf("%d",&n);
    int j;

    j=sqrt(n);
    for (i=2;i<=j;i++)
    if(n%i==0)
      break;
    if(i<n)
       printf("%d is not  a prime\n",n);
    else
       printf("%d is a prime\n",n);
    return 0;
} 

