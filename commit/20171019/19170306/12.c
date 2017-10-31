#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long long unsigned int N,max=0,min=0,sum=0;
double avg=0,var=0,sva=0;
scanf("%llu",&N);if (N>=100000||N<1) printf("wrong number\n");
int i;long long unsigned int arr[N];srand(time(0));
	for(i=0;i<N;i++)
	{
	arr[i]=rand()%N+1;
	if(arr[i]>arr[max]) max=i;
	if(arr[i]<arr[min]) min=i;
	sum+=arr[i];
	}
	avg=((double)sum)/(double)N;
		for(i=0;i<N;i++)
		var=var+(arr[i]-avg)*(arr[i]-avg);
	var=var/N;
	sva=sqrt(var);
printf("max:%llu,num:%llu\nmin:%llu,num:%llu\nsum:%llu\navg:%.6lf\nvar:%.6lf stdvar:%.6lf\n",arr[max],max,arr[min],min,sum,avg,var,sva);
return 0;
}
