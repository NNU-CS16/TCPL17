#include<stdio.h>
int is_sorted(int arr[],int left,int right);
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,3};
int left,right;
scanf("%d %d",&left,&right);
printf("%d\n",is_sorted(arr,left,right));
return 0;
}

int is_sorted(int arr[],int left,int right)
{
int i;
	for (i=left;i<right;i++)
		if (arr[i]>arr[i+1])
			return 0;
return 1;
}
