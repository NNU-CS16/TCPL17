#include <stdio.h>
int main()
{
	int i,j,n,a,s;
	scanf("%d%d",&n,&a);
	for(i=j=s=0;i<n;i++)
	{j=j*10+a;
		s+=j;
	}
	printf("%d\n",s);
	return 0;
}
