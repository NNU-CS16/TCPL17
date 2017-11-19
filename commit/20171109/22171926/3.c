#include <stdio.h>
int Cal(int N,int a,int b);

int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",Cal(N,1,2)%100007);
    return 0;
}

int Cal(int N,int a,int b)
{
    if (N==1)
        return a;
    if (N==2)
        return b;
    return Cal(N-1,b,a+b);
}

