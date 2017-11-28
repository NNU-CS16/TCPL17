#include <stdio.h>
<<<<<<< HEAD
int is_sorted(int arr[],int left,int right);

int main()
{
    int arr[]={2,5,4,6,7,8,9,11,12,13,14,17};
    int left ,right;
    scanf("%d%d",&left,&right);
    if (is_sorted(arr,left,right)==1)
        printf("ordered\n");
    else
    {
         printf("unordered\n");
    }
    return 0;
}

int is_sorted(int arr[],int left,int right)
{
    int i,flag=1;
    for (i=left;i<right;i++)
    {
        if (arr[i]<=arr[i+1])
            continue;
        else
        {
            flag=0;
            break;
         }            
     }
     return flag;
=======

 int is_sorted(int arr[], int left, int right)
{
	int flag = 0, i;
	for (i = left; i < right; i++)
	{	
		if ( arr[i] <= arr[i+1])
			continue;
		else flag = 1;
	}
		return flag;
}
 
 int main()
{
	int str[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
				   11, 12, 13, 14, 15, 16, 17, 18, 19,20};
	int a, b, m;
	scanf("%d %d", &a, &b);
	m = is_sorted(str, a, b);
	if (m == 0)
		printf("IS\n");
	else
		printf("NOT\n");
	return 0;
>>>>>>> 940cc9e8e50264fac1649039aba692658d5eced6
}
