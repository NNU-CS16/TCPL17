#include<stdio.h>
int main()
{
    int a[1000],b[1000],c[1000],i=1,j,d,e=0;
    a[0]=0,b[0]=0;
    printf("A>0  B>0  A>=B  A+B  A<=10^1000  B<=10^1000\n");
    for(i=1;;)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
            i++;
        if(a[i]<0)
            break;
    }
    i--;
    for(j=1;;)
    {
        scanf("%d",&b[j]);
        if(b[j]>=0)
            j++;
        else
            break;
    }
    j--;
    for(d=j;d>=1;d--)
    {
        c[e]=a[i]+b[j];
        if(c[e]>=10)
        {
            c[e]=c[e]-10;
            a[i-1]++;
        }
        i--;
        j--;
        e++;
    }
    for(d=e;d<1000;d++)
    {
        if(i>0)
        {
            c[e]=a[i];
            i--;
            e++;
        }
        if(i==0)
            break;
    }
    if(a[0]>0)
        c[e]=a[i];
    e--;
    for(d=e;d>=0;d--)
        printf("%d",c[d]);
    printf("\n");
    return 0;
}
