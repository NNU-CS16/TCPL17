#include<stdio.h>
int main()
{
int N,M,i,num;
scanf("%d %d",&N,&M);
	int arr[N];
for (i=0;i<N;i++)
	scanf("%d",arr+i);
for (i=0;i<N;i++)
	{
	num=i-M;
	if(num<0) num+=N;
	printf(" %d",arr[num]);
	}
return 0;
}
