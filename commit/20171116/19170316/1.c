#include<stdio.h>

int is_sorted(int arr[],int left,int right)
{	
	int j=0,x=0;
	for(int i=left;i<right-1;i++)
	{
		if(arr[i]>arr[i+1])
			return 0;
	}
	return 1;
}
int main()
{
int left,right;
int arr[9]={1,2,3,4,9,8,7,6,5};
scanf("%d%d",&left,&right);
if(is_sorted(arr,left,right)==1)
printf("yes");
if(is_sorted(arr,left,right)==0)
printf("no");
return 0;
}
