#include<stdio.h>
#include<math.h>
int main()
{
	int a,X,Y,n,N;
	scanf("%d",&N);
	if(N<=10000)
 {n=sqrt(N/2.0);
	a=1;
	for(X=0;X<=n;X++)
	{	Y=sqrt(N-X*X);
		if(X*X+Y*Y==N)
		{	printf("%d %d\n",X,Y);
		a=0;}
	}
	if(a)
		printf("No Solution");}

	return 0;
}
