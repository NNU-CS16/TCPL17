#include <stdio.h>
int is_sorted(int arr[], int left, int right)
{
    int i, m = 0;
    for (i = left; i <= right; i++)
    {
	if (arr[i] < arr[i-1])
	    break;
        else
	    m++;
    }
    if (m == right - left + 1)
        printf ("数组区间[left,right]有序");
    else
	printf ("数组区间[left,right]无序");
}
int main( )
{
    int arr[1000], left, right, j;
    printf ("请输入区间：");
    scanf ("%d%d", &left, &right);
    printf ("请输入数组：");
    for (j = 0; j <= right; j++)
    {
	scanf ("%d", &arr[j]);
    }
    is_sorted(arr, left, right); 
    return 0;
}
