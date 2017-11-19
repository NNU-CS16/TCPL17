#include<stdio.h>

int main()
{
	int A,B,D;
	scanf("%d%d%d",&A,&B,&D);
	int arr[30];
	int i;
	int sum,n;
	sum=A+B;
	for(i=0; ;i++)
	{
		arr[i]=sum%D;
		sum/=D;
		if(sum==0)
			break;
	}
	n=i;
	for(i=n;i>=0;i--)
		printf("%d",arr[i]);
	return 0;
}
