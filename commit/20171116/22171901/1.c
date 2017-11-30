#include <stdio.h>
int is_sorted (int arr[] , int left , int right);

int main ()
{
    int arr[10] , flag;
    int left , right , i;
    printf ("输入数据：\n");
    for (i = 0; i < 10; i++)
    {
         scanf ("%d" , &arr[i]);
    }
    printf ("输入区间：\n");
    scanf ("%d%d" , &left , &right);
    flag = is_sorted (arr , left , right) ;
    if (flag == 1)
	printf ("有序\n");
    else
	printf ("无序\n");
}

int is_sorted (int arr[] , int left , int right)
{
    int i , flag;
    for (i = left ; i < right ; i++)
    {
	if (arr[i+1] >= arr[i])
	{
	   flag = 1;
           continue;
	}
	else
	{
	   flag = 0;
	   break;
	}
    }
    return flag;
}
