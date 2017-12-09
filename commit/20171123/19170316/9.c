#include<stdio.h>
int S(int arr[],int i,int n)
{
	int temp=i;
	for(;i<n-1;i++)
	if(arr[temp]>arr[i+1])
		return 0;
	return 1;
}
int X(int arr[],int i,int n)
{
	int temp=i;
	for(;i>0;i--)
		if(arr[temp]>arr[i+1])
			return 0;
			return 1;
}
int Z(int arr[],int i,int n)
{
	if((S(arr,i,n)+X(arr,i,n))==2)
		return 1;
		return 0;
}
int B(int arr[],int n)
{
	int temp=n;
	for(int q=0;q<n-1;q++)
		if(arr[q]>arr[temp])
			return 0;
			return 1;
}
int K(int arr[],int n)
{
	int s=0,i;
	for(i=0;i<n-1;i++)
		s=s+Z(arr,i,n);
	return s+B(arr,n);
}

int main()
{
int n,arr[100];
printf("输入元素个数");
scanf("%d",&n);
printf("输入元素");
for(int x=0;x<n;x++)
scanf("%d",&arr[x]);
printf("%d",K(arr,n));
return 0;
}
