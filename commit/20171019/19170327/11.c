#include<stdio.h>

int fac(int x)

{

	if(x==0||x==1)

	return 1;

	else
	return x*fac(x-1);

}





int main()

{

	int N;

	int M;

	scanf("%d",&N);

	int i,j;
	for(i=0;i<=N;i++)
		{
											for(j=0;j<=i;j++)

														{																	M=fac(i)/(fac(j)*fac(i-j));

																					printf("%d ",M);

																							}

													printf("\n");

														}

		return 0;
}

