#include<stdio.h>
int is_prime(int n)
{
    int i;
    for (i=2;i<=n-1;i++)
    if (n%i==0)
      break;
    if (i<n)
      return -1;
    else 
      return 0;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",is_prime(n));
    
    return 0;

}
