#include<stdio.h>

long long int S(long long int n)
{
        if(n%2==1)
                return n;
        if(n%2==0)
                return S(n/2);
}

int main()
{
long long int N,s=0;
scanf("%lld",&N);
for(long long int i=1;i<N;i++)
s=s+S(i);
printf("%lld",s);
}

