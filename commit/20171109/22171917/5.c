#include <stdio.h>
int Hanoi(int n);

int main()
{
    int n, m;
    scanf("%d",&n);
    m=2*Hanoi(n);
    printf("%d\n", m);
    return 0;
}

int Hanoi(int n)
{
   if ( n == 1 )
    return 1;
   else
    return 2*Hanoi(n-1)+1;
}
