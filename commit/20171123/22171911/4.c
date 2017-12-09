#include <stdio.h>
int add(int n1, int n2)
{   
    int s1, s2;
    if (n1 == 0)
	return n2;
    if (n2 == 0)
	return n2;
    s1 = n1 ^ n2;
    s2 = (n1 & n2) << 1;
    return add(s1, s2);
}
int main( )
{
    int n1, n2;
    printf ("请输入：");
    scanf ("%d %d", &n1, &n2);
    printf ("%d", add(n1, n2));
    return 0;
}
