#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Please input: ");
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}
int sum(int n)
{
    int m = 1;
    (n > 1) && (m = n + sum(n - 1));
    return m;
}

    
