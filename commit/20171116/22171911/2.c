#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void BubbleSort(int arr[], int left, int right)
{
    int i, temp, m = 0;
    for (i = left; i <= right; i++)
    {
	if (arr[i] > arr[i+1])
	{
	    temp = arr[i];
	    arr[i] = arr[i+1];
	    arr[i+1] = temp;
	}    
        printf ("%d ", arr[i]);
    }
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
    int a, b, left, right, arr[10];
    srand((unsigned)time(NULL));
    for (a = 0;a < 10; a++)
    {
	arr[a] = rand() % 100 + 1;
        printf ("%d ", arr[a]);
    }
    printf ("输入区间：\n");
    scanf ("%d%d", &left, &right);    
    BubbleSort(arr, left, right);  
    return 0;
}
