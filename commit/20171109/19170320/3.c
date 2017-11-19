#include <stdio.h>
int f(int N);
int main()
{
    int N;
    printf("please input the number(N<=1000)=");
    scanf("%d",&N);
    printf("%d\n",f(N));
    return 0;
}
int f(int N)
{
    if (N>=1000)
        printf("no such number\n");
    else
        if (N==1)
            return 1;
        else
            if (N==2)
                return 2;
            else
                return f(N-1)+f(N-2);
}
