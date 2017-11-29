#include <stdio.h>

int is_sorted(int arr[],int left,int right)
{
	for(int k=left;k<right;k++)
	{
		if(arr[k] > arr[k+1])
			return 0;
	   
		else
			return 1;
	}
}


int main()
{
	int left,right, a[1250];
	scanf("%d%d",&left,&right);
	for(int k=0;k<=right;k++)
	{
		scanf("%d",&a[k]);
	}
	if(is_sorted(a,left,right)==0)
		printf("无序\n");
	else
		printf("有序\n");

	return 0;
}
