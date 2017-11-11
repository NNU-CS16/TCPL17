#include <stdio.h>
void print_hex(int a);

int main()
{
    int n;
    printf("Please input n:");
    scanf("%d",&n);
    print_hex(n);
    return 0;
}

void print_hex(int a)
{
    int p,q,m;
    p=a/16;
    q=a%16;
    m=p*10+q;
    printf("%d",m);
}



