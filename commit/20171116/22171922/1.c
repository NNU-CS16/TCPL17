#include<stdio.h>

int is_sorted(int arr[],int left,int right);
int main()
{
	int arr[100],i,left,right,n,x;
	scanf("%d %d %d",&n,&left,&right);
	printf("input data");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	x=is_sorted(arr,left,right);
	if (x==(right-left))
		printf("it is regular\n");
	else printf("it is irregular\n");
	return 0;
}

int is_sorted(int arr[],int left,int right)
{
	int flag=0,i;
	for (i=left;i<right-left;i++)
		if (arr[i]<=arr[i+1])
			flag++;
	return flag;
}
