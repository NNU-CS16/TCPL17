#include <stdio.h>
int binInsert(int n,int m,int j,int i);
	
int binInsert(int n,int m,int j,int i)  
{
	n |= (m << j);
	return n;
}

int main()
{
	int n, m, j , i;
	printf("input n,m,j,i:");
	scanf("%d %d %d %d", &n, &m, &j, &i);
	printf("%d\n", binInsert(n, m, j, i));
	return 0;
}
