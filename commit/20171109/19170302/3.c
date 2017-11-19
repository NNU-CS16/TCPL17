#include<stdio.h>
int f(int n,int a,int b);

int main()
{
        int n;
        scanf("%d",&n);
        printf("f(%d)=%d\n",n,(f(n-1,1,2)%100007));
        return 0;
}
int f(int n,int a,int b)
{
        if(n==1)
                return 1;
        if(n==2)
                return b;
        else
                return f(n-1,b,a+b);
}
