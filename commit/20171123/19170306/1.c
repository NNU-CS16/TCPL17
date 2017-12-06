#include<stdio.h>
int main()
{
int N,i=0,j;
scanf("%d",&N);
int out=0;
while (i<N)
	{
	out+=i+1;
	for (j=2;j*(i+1)<=N;j*=2)
		out+=i+1;
	i+=2;
	}
printf("%d\n",out);
return 0;
}
