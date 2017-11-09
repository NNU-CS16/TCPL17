#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    printf("please input a number ");
    scanf("%d",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++)
       if(n%i==0)
       break;
    if(i<m)
       printf("%d is not a prime number\n",n);
    else
       printf("%d is a prime number\n",n);
    return 0;
}
