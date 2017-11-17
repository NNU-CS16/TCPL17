#include<stdio.h>
#include<math.h>
int main()
{
    int i,s,a,b,d,sum;
    int shu[1000];
    scanf("%d%d%d",&a,&b,&d);
    s=a+b;
    for(i=0;s!=0;i++)
    {
        shu[i]=s%d;
        s/=d;
    }
    for(int j=i;j>=0;j--)
    {
        sum+=shu[j]*pow(10,j);
    }
    printf("%d\n",sum);
    return 0;
}
