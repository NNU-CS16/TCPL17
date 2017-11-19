#include<stdio.h>
int a[10000];
int k;
void step(int n)
{
    
   
    if(n>1)
    {
        step(n-1);
        for(int i=(n-k>=0)?(n-k):0;i<n;i++)

            a[n]=(a[n]+a[i])%10007;
    }    
       
}
int main()
{
    int n;
    scanf("%d%d",&n,&k);
    a[0]=1;
    a[1]=1;
    step(n);
    printf("%d",a[n]);
    return 0;
}    
