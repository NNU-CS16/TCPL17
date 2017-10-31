#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("Please input n(n>3):");
		scanf("%d",&n);
		j=sqrt(n);
		for(i=2;i<=j;i++)
		{
			if(n%i==0)
	                break;
		}
		if(i>j)
			printf("yes\n");
		else
			printf("no\n");
	return 0;
}
