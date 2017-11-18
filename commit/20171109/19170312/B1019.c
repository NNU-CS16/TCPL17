#include<stdio.h>
void change(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
}
int max(int N)
{
    int i,j,a[5];
    for(i=3;i>=0;i--)
    {
        a[i]=N%10;
        N/=10;
    }
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[i]>=a[j])
            change(&a[i],&a[j]);
        }
    }
    return a[3]*1000+a[2]*100+a[1]*10+a[0];
}
int min(int N)
{
    int i,j,a[5];
    for(i=3;i>=0;i--)
    {
        a[i]=N%10;
        N/=10;
    }
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[i]>=a[j])
                change(&a[i],&a[j]);
        }
    }
    return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
int main()
{
    int N;
    scanf("%d",&N);
    for(;;)
    {
        printf("%d-%d=%d\n",max(N),min(N),max(N)-min(N));
        N=max(N)-min(N);
        if(N==6174||N==0)
        break;
    }
    return 0;
}
