#include<stdio.h>
int is_prime(int n)
{
    int j,flag=0;
    for(j=2;j<=n-1;j++)
    {
        if(n%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) return -1;
    if(flag==0) return 0;
}
int main()
{
    int a,i=0,s[1500];
    for(a=2;a<=10000;a++)
    {
        if(is_prime(a)==0)
        {
            s[i]=a;
            i++;
        }
    }
    for(i=99;i<=999;i++)
        printf("%d ",s[i]);
    printf("\n");
    return 0;
}
