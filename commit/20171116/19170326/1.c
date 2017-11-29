#include<stdio.h>

int is_sorted(int arr[], int left, int right)
{
	int i;
	int flag=0;
	for(i=left; i<right; i++)
	{
		if(arr[i+1]<arr[i])
			flag=1;
	}
	return flag;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,1};
	int left=3;
	int right=9;
	printf("%d\n",is_sorted(arr, left,  right));
	return 0;
}

	

