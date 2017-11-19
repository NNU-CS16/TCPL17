#include<stdio.h>
#include<math.h>
long int fid(int n,int k)
{
    long int sum=0;
    int i;
    if(n<=k) return pow(2,n-1);
    else
    {
        for(i=1;i<=k;i++)
            sum+=fid(n-i,k);
        return sum;
    }
}
int main()
{
    int n,k;
    long int a;
    scanf("%d%d",&n,&k);
    a=fid(n,k)%100007;
    printf("%ld\n",a);
    return 0;
}
