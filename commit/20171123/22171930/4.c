#include <stdio.h>
int add(int n1, int n2);
int main()
{
    int a,n1,n2;
    scanf("%d%d", &n1, &n2);
    a = add(n1,n2);
    printf("%d", a);
    return 0;
}
int add(int n1, int n2)
{
    int i,j;
    if (n2 == 0)
    return n1;
    i = n1 ^ n2;
    j = (n1 & n2) << 1;
    return add(i,j);
} 
