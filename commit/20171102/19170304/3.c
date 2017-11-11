#include<stdio.h>
int is_pow2(int n);
int main()
{
    int n;
    scanf("%d",&n);
    is_pow2(n);
    return 0;
}

int is_pow2(int n)
{
    int k=1,i=-3,flag=2;
    if(n==1) i=2;
    else
        { while(k<=n)
            {k*=2;
             if(k==n) i=2;
            }
        }
    flag=flag^i;
    printf("%d\n",flag);
}
