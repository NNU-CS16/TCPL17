#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[100000];
	int i;
	srand(time(NULL));
	for(i=0;i<=N-1;i++)
		arr[i]=rand()%N+1;
	int min=0,max=0;
	for(i=1;i<=N-1;i++)
	{
		if(arr[min]>arr[i])
			min=i;
		if(arr[max]<arr[i])
			max=i;
	}
	printf("%d %d\n",arr[max],max);
	printf("%d %d\n",arr[min],min);
	int sum=0;
	for(i=0;i<=N-1;i++)
		sum=sum+arr[i];
	printf("%d\n",sum);
	int ave;
	ave=sum/N;
	printf("%d\n",ave);
	int var=0;
	for(i=0;i<=N-1;i++)
		var=var+(arr[i]-ave)*(arr[i]-ave);
	printf("%d\n",var);
	int sta;
	sta=sqrt(var);
	printf("%d\n",sta);
	return 0;
}
