#include<stdio.h>
int j,k;
int blackhole(int n)
{
    int a[4];
    int i,temp,t;
        a[0]=(n/1000);
        a[1]=(n-a[0]*1000)/100;
        a[2]=(n-a[0]*1000-a[1]*100)/10;
        a[3]=n-a[0]*1000-a[1]*100-a[2]*10;
    for(t=3;t>0;t--)
    for(i=0;i<t;i++)
    {
        if(a[i]<a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    j=1000*a[0]+100*a[1]+10*a[2]+a[3];
    return j;
}
int blackhole1(int n)
{
    int i,temp,t;
    int a[4];
        a[0]=(n/1000);
        a[1]=(n-a[0]*1000)/100;
        a[2]=(n-a[0]*1000-a[1]*100)/10;
        a[3]=n-a[0]*1000-a[1]*100-a[2]*10;

    for(t=3;t>0;t--)
    for(i=0;i<t;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    k=1000*a[0]+100*a[1]+10*a[2]+a[3];
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    j=blackhole(n);
    k=blackhole1(n);
    int m=j-k;
    while(m!=6174)
    {
        printf("%d-%d=%d",j,k,m);
        m=j-k;
        j=blackhole(m);
        k=blackhole1(m);
        
    }
    printf("%d-%d=%d",j,k,m);
return 0;
}
        
