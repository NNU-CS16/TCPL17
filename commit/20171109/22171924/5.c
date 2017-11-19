#include <stdio.h>
int Hanoi(int n)
{
    if(n==1)
        return 2;
    else
	return Hanoi(n-1)+2+Hanoi(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Hanoi(n));
    return 0;
}
