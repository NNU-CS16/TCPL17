#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("a = %d,b = %d\n", a, b);

    int temp;
    temp= a;
    a=b;
    b=temp;

    printf("a= %d,b = %d\n", a, b);

    return 0;
}
