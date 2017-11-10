#include<stdio.h>
int count1_in_bin(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count1_in_bin(n));
    return 0;
}

int count1_in_bin(int n)
{
    int count=0;
    int t;
    while(n)
    {
        t=n%2;
        n=n/2;
        if(t==1)
                count++;
    }
    return count;
}

