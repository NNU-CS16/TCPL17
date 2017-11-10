#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main()
{
	int i,N,max=0,min=0,sum=0,s=0;
	double ave = 0,fang=0,biao;
	int arr[100000] = {0};
	scanf("%d",&N);
	for (i = 0; i < N; i++)
	{
		arr[i] = rand() % N + 1;
		sum += arr[i];
		if (arr[max] < arr[i])
			max = i;
		if (arr[min]>arr[i])
			min = i;
	}
	ave = (double)sum / N;
	for (i = 0; i < N; i++)
		s += (arr[i]-ave)*(arr[i]-ave);
	fang = (double)s / N;
	biao = sqrt(fang);
	printf("%d %d %d %f %f %f\n",max,min,sum,ave,fang,biao);
	return 0;
}









