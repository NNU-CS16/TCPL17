#include <stdio.h>
int sum(int n);
int main()
{
	int n;
	int k;
	printf("Please input n:");
	scanf("%d",&n);
	k = sum(n);
	printf("%d\n",k);
	return 0;
}

int sum(int n)
{
	int p = n;
	n && (p += sum(n - 1));
	return p;
} 
	
