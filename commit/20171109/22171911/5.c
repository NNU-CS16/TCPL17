#include <stdio.h>
int Hanoi(int n)
{   
    if (n == 1)
	return n;
    else 
	return 2 * Hanoi(n - 1) + 1;

}
int main( )
{   
    int n, A;
    printf ("请输入一个正整数n，1<=n<=25：");
    scanf ("%d", &n);
    A = 2 * Hanoi(n);
    printf ("%d", A);
    return 0;
}
