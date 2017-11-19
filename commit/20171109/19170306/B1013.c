#include<stdio.h>
#include<math.h>
int sushu(int);
int main()
{
int M,N,count=0,j=0;
scanf("%d %d",&M,&N);
for (int i=2;count<N;i++)
	{
	 if (sushu(i)==1)
		{
		count++;
		if (count>=M)
			{
			printf("%d ",i);
			j++;
			}
		if (j==10)
			{
			printf("\n");
			j=0;
			}
		}

	}
return 0;
}

int sushu(int number)
{
	int i;
	for (i=2;i<=sqrt(number);i++)
		{
		if (number%i==0)		
		return 0;
		}
	return 1;	
}
