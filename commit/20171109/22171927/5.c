#include <stdio.h>
int Hanoi(int n);

int main()
{
	int n;
	printf("Please input n:");
	scanf("%d",&n);
    printf("%d\n",Hanoi(n));
	return 0;
}

int Hanoi(int n)
{
	if(n == 1)
		return 2;
	return 2*Hanoi(n-1)+2;
}	
