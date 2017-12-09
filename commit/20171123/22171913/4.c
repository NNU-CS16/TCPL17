#include <stdio.h>
int add (int n1, int n2);
int main()
{
    int n1, n2;
    printf("Please input: ");
    scanf("%d %d", &n1, &n2);
    printf("%d\n", add(n1, n2));
    return 0;
}
int add(int n1, int n2)
{
    int p, q;
    p = (n1 & n2) << 1;
    q = n1 ^ n2;
    while (p & q)
    {
        n1 = p;
	n2 = q;
        p = (n1 & n2) << 1;
        q = n1 ^ n2;
    }
    return p | q;
    
}

