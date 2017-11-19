#include<stdio.h>
int j,k;
int blackhole(int n)
{
    int a[4];
    int i,temp;
    if(n/1000!=0)
        a[0]=(n/1000);
    if((n-a[0]*1000)/100!=0)
        a[1]=(n-a[0]*1000)/100;
    if((n-a[0]*1000-a[1]*100)/10!=0)
        a[2]=(n-a[0]*1000-a[1]*100)/10;
    if(n-a[0]*1000-a[1]*100-a[2]*10!=0)
        a[3]=n-a[0]*1000-a[1]*100-a[2]*10!=0;
    for(i=0;i<3;i++)
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
    int i,temp;
    int a[4];
    if(n/1000!=0)
        a[0]=(n/1000);
    if((n-a[0]*1000)/100!=0)
        a[1]=(n-a[0]*1000)/100;
    if((n-a[0]*1000-a[1]*100)/10!=0)
        a[2]=(n-a[0]*1000-a[1]*100)/10;
    if(n-a[0]*1000-a[1]*100-a[2]*10!=0)
        a[3]=n-a[0]*1000-a[1]*100-a[2]*10!=0;

    for(i=0;i<3;i++)
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
        
        if(m==6174)
            break;
    }
return 0;
}
        
