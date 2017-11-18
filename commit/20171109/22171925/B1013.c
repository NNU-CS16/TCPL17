#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i,a;
    a = sqrt(n);
    for (i = 2;i <= a;i ++)
    { 
        if (n % i == 0)
        return -1;
    }
    return 0;
}

int main()
{   int N,M;
    int n = 0,m = 0;
    printf("请输入N,M(N<M):\n");
    scanf("%d%d",&N,&M);
    for (m = 0;m <= M+2;n ++)
    {
        if (prime(n) == 0)    
        {
	    m ++;
	}
        if (prime(n) == 0 && m >= N+2 && m <= M+2)
        {
	    printf("%d ",n);
        }
    }
    return 0;
}








