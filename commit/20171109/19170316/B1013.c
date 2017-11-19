#include<stdio.h>
#include<math.h>
int S(int n)//Sushu n
{
	int m,j;
	m=sqrt(n);
	if(n==1)
		return 0;
	if(n==2||n==3)
		return 1;
	if(n>3)
	{for(j=2;j<=m;j++)
		{if((n%j)==0)
			return 0;}
		return 1;}
}
int main()
{
int M,N,n=1;
scanf("%d%d",&M,&N);
int i=1;
while(i<N)
{
if(S(n)==1 && i>=M)
{printf("%d ",n);n++;i++;}
if(S(n)==1 && i<M)
{n++;i++;}
if(S(n)==0)
n++;
}

return 0;
}
