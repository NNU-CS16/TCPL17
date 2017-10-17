#include<stdio.h>
int main()
{
    int a,n,count=1;
    long int sn=0,tn=0;
    printf("a=,n=\n",a,n);
    scanf("%d,%d",&a,&n);
    while(count<=n)
    {
       tn=tn+a;
       sn=sn+tn;
       a=a*10;
       ++count;
    }
    printf("%d",sn);
    return 0;
}
