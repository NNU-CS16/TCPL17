#include<stdio.h>
int B(int n,int k);

int main()
{
        int n,k;
        printf("n,k(k<=n)");
        scanf("%d%d",&n,&k);
        printf("%d\n",B(n,k));
        return 0;
}

int B(int n,int k)
{
        if(k==0||k==n)
                return 1;
        return B(n-1,k-1)+B(n-1,k);
}
