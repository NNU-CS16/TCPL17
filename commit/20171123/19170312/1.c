#include<stdio.h>
int f(int n)
{
    int i,j=0,a[n];
    for(i=1;i<=n;i++)
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }
    for(i=j-1;;i--)
        if(a[i]%2==1)
            return a[i];
}
int main()
{
    int sum=0,N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
        sum+=f(i);
    printf("%d\n",sum);
    return 0;
}
