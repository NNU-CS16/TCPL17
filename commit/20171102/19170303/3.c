#include<stdio.h>
int is_pow2(int n)
{
    int k=0;
    if(n==1)
        return 0;
    else if(n%2!=0)
        return -1;
    else
    {
    while(k==0&&n!=1)
    {
    n/=2;
    k=n%2;
    }
    if (n==1)
        return 0;
    else
        return -1;
    }
}

int main ()
{
int n,a;
scanf("%d",&n);
a=is_pow2(n);
printf("%d\n",a);
return 0;
}
