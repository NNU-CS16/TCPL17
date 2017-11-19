#include<stdio.h>
int f(int n);
int k;
int main()
{
        int n;
        printf("n,k:");
        scanf("%d%d",&n,&k);
        printf("f(%d)=%d",n,f(n)%100007);
        return 0;
}

int f(int n)
{
        int i,j;
        int m;
        f(0)==1;
        f(1)==1;
        if(n<=k)
        {
            return f(n-1)+f(n-1);
        }
        else
        {
        i=n-k;
        for(j=1;j<=i;j++)
              m+=f(j);
        return f(n-1)*2-m;
        }
}

