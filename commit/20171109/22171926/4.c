#include <stdio.h>
void step(int n);
int k;
int a[1000]={0};

int main()
{
    int n;
    scanf("%d%d",&n,&k);
    a[0]=1;
    a[1]=1;
    step(n);
    printf("%d\n",a[n]%100007);
    return 0;
}

void step(int n)
{
     if (n>1)
         step(n-1);
     int i,sum=0;
     for(i=(n>=k)?(n-k):0;i<n;i++)
         sum=sum+a[i];
     a[n]=sum; 
}
