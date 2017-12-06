/*7.c_归并排序*/
#include <stdio.h>
#include <time.h>

void Merge(int arr[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;
	int temp[1000];
    while (i != mid + 1 && j != right + 1)
    {
        if (arr[i] > arr[j])
            temp[k++] = arr[j++];
        else
            temp[k++] = arr[i++];
    }
    while (i != mid + 1)
        temp[k++] = arr[i++];
    while (j != right + 1)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
}
 
//内部使用递归
void MergeSort(int arr[], int left, int right)
{
    int mid;
	int temp[1000];
    if(left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}
 
int main()
{
    int arr[1000], left, right, i;
	printf("请输入左、右区间：");
	scanf("%d%d", &left, &right);
	srand((unsigned)time(NULL));
    for (i = left; i <= right; ++i)
	{
        arr[i] = rand ()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");

    MergeSort(arr, left, right);

    for(i = left; i <= right; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
