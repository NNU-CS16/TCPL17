#include<stdio.h>
int count1_in_bin(int n)
{
    int i,s=0,a[1000];
    for(i=0;n!=0;n/=2,i++)
        a[i]=n%2;
    i--;
    for(;i>=0;i--)
    {
        if(a[i]==1)
            s++;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}
