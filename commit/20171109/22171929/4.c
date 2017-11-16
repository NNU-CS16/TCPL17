#include <stdio.h>
int step2(int N,int k);

int main()
{
    int N;
    int k;
    scanf("%d",&N);
    scanf("%d",&k);
    step2(N,k);
    return 0;
}

int step2(int N,int k)
{
    int a[1000000]={1};
    int i,j;
    for(i=1; i<=N; i++)
        for(j=1; j<=k; j++)
            if(i>=j)
                a[i]=(a[i]+a[i-j])%100007;
    printf("%d\n",a[N]);
    return 0;
}    
