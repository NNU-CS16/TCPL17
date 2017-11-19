#include <stdio.h>
int step(int n)
{
    if (n==1||n==2) 
        return n; 
    else
	return step(n-1)+step(n-2);
}

int main()
{
    int n;
    scanf( "%d",&n);
    printf("%d\n", step(n));
    return 0;
}
