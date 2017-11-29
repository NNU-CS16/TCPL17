#include <stdio.h>
int is_sorted(int arr[], int left, int right)
{
	for(left;left < right;left++)
	{
		if(arr[left - 1] >> arr[left])
			break;
	}
	if(left < right)
		return 0;
	else 
		return 1;
}

int main()
{
	int i,j,arr[10],left,right;
	printf("请输入十个整数\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入left,right\n");
	scanf("%d%d",&left,&right);
	if(is_sorted(arr,left,right) == 1)
		printf("数组有序\n");
	else
		printf("数组无序\n");
	return 0;
}
