#include<stdio.h>
void check(int [],int,int);
int main()
{
int N,i;scanf("%d",&N);
int arr[N];
for (i=0;i<N;i++) scanf("%d",arr+i);
for (i=0;i<N;i++)
	check(arr,i,N);
printf("\n");
return 0;
}

void check(int arr[],int n,int N)
{
int i;
for (i=0;i<n;i++)
	if (arr[i]>arr[n]) return;
for (i=n+1;i<N;i++)
	if (arr[i]<arr[n]) return;
printf(" %d ",arr[n]);
}
