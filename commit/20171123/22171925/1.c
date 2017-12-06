#include <stdio.h>
int Fac(int p)
{   int M;
    if (p % 2 == 1)
    M = M + p;
    else
    return Fac(p / 2);
}

int main()
{
    int i,j,r,p,u,N,M = 0,K;
    printf("Please input N:");
    scanf("%d",&N);
    for (i = 1;i <= N;i = i + 2)
    M = M + i;
    for (j = 2;j <= N;j = j + 2)
    {    
        p = j / 2;
        for (r = 1;r <= N;r = r + 2)
        {  
            if (p == r)
            M = M + p;
        }

    Fac(p);

    }
    printf("%d\n",M);
    return 0;
}





