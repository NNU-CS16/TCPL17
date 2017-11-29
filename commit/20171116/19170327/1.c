#include <stdio.h>

int is_sorted(int arr[], int left, int right)
{
	for(int i = left; i < right; i++)
	{
		if(arr[i] > arr[i+1])
			return 0;
	}
	return 1;
}
int main()
{
	int left,right;
	int i,a[10];
	for (i = 0;i < 10; i++)
		scanf("%d",&a[i]);
	scanf("%d%d",&left,&right);
	if(is_sorted(a,right,left) == 0)
		printf("Disordered Array\n");
	else
		printf("Ordered Array\n");
	return 0;
}

