#include <stdio.h>
int f(int );
int main(void)
{
    int N,i;
    int sum = 0;
    scanf("%d",&N);
    for( i = 1; i <= N; i++)
    sum += f(i);
    printf("%d\n",sum);

    return 0;
}

int f(int n)
{
    while (n > 0)
    {
        if (n % 2) break;
        else n /= 2;
            
    }
        return n;
}
