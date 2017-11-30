#include <stdio.h>
#include <string.h>
int is_sorted(int arr[], int right, int left);
int main()
{
    int right, left, arr[5] = {1, 2, 3, 6, 5};   //定义数组
    scanf("%d %d", &right, &left);
    is_sorted(arr, right, left);
    return 0;
}
int is_sorted(int arr[], int right, int left)
{
    int i, flag = 0;    //定义flag为0时数组为升序
    for(i = 0; i < right; i++)
    {
	if (arr[i] > arr[i + 1])   //判断数组是否为升序
	{
	    flag = 1;
	    break;
	}
    }
    if(flag == 0)
	    printf("有序\n");
    if(flag == 1)
	    printf("无序\n");
}

