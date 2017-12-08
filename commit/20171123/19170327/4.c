#include <stdio.h>
int add(int n1, int n2)
{
	int i,j;	
	if(n2 == 0)
		return n1;

	i = n1 ^ n2;
	j = n1 & n2 << 1;
	
	return add(i,j);
}


int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	printf("%d\n",add(n1,n2));
	return 0;
}

