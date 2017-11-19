#include <stdio.h>
void print_hex(int a);
int main()
{
    int a;	
    print_hex(a);
    return 0;
}
void print_hex(int a)
{
    int m[33], b, i, n = 0;
    scanf("%d", &b);
    while (b != 0)
    {
	a = b % 16;
	m[n] = a;	
	b = b / 16;
	n++;
    }    
    for(i=n-1;i>=0;i--)
    {
	printf("%x",m[i]);
    }
    printf("\n");
}
