#include<stdio.h>

int add(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    if (n1 == 0)
    {
        return n2;
    }
    int sum = n1 ^ n2;
    int temp = n1 & n2;
    int i = temp << 1;
    return add(sum, i);
}

int main()
{
    int n1, n2;
    printf("n1,n2为：");
    scanf("%d%d", &n1, &n2);
    printf("%d\n", add(n1, n2));
    return 0;
}

