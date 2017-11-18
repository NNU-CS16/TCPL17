#include <stdio.h>
int f(int N);
int f(int N)
{
    if(N==1||N==2)
        return N;
    else
        return f(N-1)+f(N-2);
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",f(N)%100007);
    return 0;
}
