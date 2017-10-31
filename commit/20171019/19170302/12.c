#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int arr[100000];
	int i,n;
	printf("Please input n:");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
	arr[i]=rand()%(n+1);
	}
	int sum,s;
	float average,variance,standarddeviation;
	for(i=0;i<n;i++)
		sum+=arr[i];
	average=(float)sum/n;
        for(i=0;i<=n;i++)
	{
		s=s+(arr[i]-average)*(arr[i]-average);
                variance=s/n;
	}
	standarddeviation=sqrt(variance);
	printf("sum=%d,average=%f,variance=%f,standarddeviation=%f\n",sum,average,variance,standarddeviation);
        int max=arr[0];
	int a;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			a=i;
		}
		else
		{
			max=max;
			a=a;
		}
	}
	printf("max=%d,i=%d\n",max,a);
	int min=arr[0];
	int b;
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
			b=i;
		}
		else
		{
			min=min;
			b=b;
		}
	}
	printf("min=%d,i=%d\n",min,b);
	printf("\n");
        return 0;

}



