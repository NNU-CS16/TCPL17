#include<stdio.h>

int search(int key, int arr[ ], int left, int right)
{
	int mid;
	int flag=-1;
	while(left<=right)
	{	
		mid=(left+right)/2;
		if(arr[mid]==key)
		{
			flag=0;
			return mid;
		}
		else
		{
			if(arr[mid]>key)
				right=mid-1;
			if(arr[mid]<key)
				left=mid+1;
		}
	}
	if(flag==-1)
		return right;
}

			

int main( )
{
	int N,p;
	scanf("%d %d\n",&N,&p);
	int i,j,k=-1;
	int temp;
	int M;
	int a[100];
	int b[100];
	for(i=0; i<N; i++)
		scanf("%d",&a[i]);
	for(i=0; i<N-1; i++)
		for(j=0; j<N-1-i; j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(i=0; i<N; i++)
	{
		M=a[i]*p;
		b[k++]=search(M,a,i,N-1)-i+1;
		if(b[k]<b[k-1])
		{
			printf("%d\n",b[k-1]);
			break;
		}
	}
				
	return 0;
}
