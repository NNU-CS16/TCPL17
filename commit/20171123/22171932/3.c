#include <stdio.h>
int sum(int n);
int main()
{
    int n, s;
    printf("请输入m:\n");
    scanf("%d", &n);
    s = sum(n);
    printf("%d\n", s);
}
int sum(int n)
{
    int s;
    s = n;
    n && (s = s + sum(n - 1));
    return s;
}
