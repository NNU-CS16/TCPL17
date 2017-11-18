#include <stdio.h>
int step(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n >= 3)
        return step(n - 1) + step(n - 2); 
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",step(n) % 100007);
    return 0;
}

