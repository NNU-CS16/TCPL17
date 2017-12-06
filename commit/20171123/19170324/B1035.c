#include <stdio.h>
#include <stdlib.h>
void Insertion_Sort(int arr[], int arr2[], int N);
void merge_sort(int arr[], int arr2[], int N, int first, int last);
void merge(int arr[], int low, int mid, int high);

int main()
{
	int N, i, j, k, flag;
	scanf("%d", &N);
	int arr1[N], arr2[N];
	for (i = 0; i <= N - 1; ++i)
		scanf("%d", &arr1[i]);
	for (i = 0; i <= N - 1; ++i)
		scanf("%d", &arr2[i]);

	for (flag = 0, j = 0; j <= N - 2; ++j)
	{
		if (arr2[j] > arr2[j + 1])
			for (k = j + 1; k <= N - 1; ++k)
				if (arr2[k] != arr1[k])
				{
					flag = 1;
					break;
				}
		if (flag == 1)
			break;
	}
	if (flag == 0)
	{
		printf("Insertion Sort\n");
		Insertion_Sort(arr1, arr2, N);
	}
	else
	{
		printf("Merge Sort\n");
		merge_sort(arr1, arr2, N, 0, N - 1);
	}

	return 0;
}

void Insertion_Sort(int arr[], int arr2[], int N)
{
	int p, q, temp, m, flag2, flag3 = 0;
	for (p = 1; p <= N - 1; ++p)
	{
		flag2 = 0;
		temp = arr[p];
		for (q = p - 1; q >= 0 && temp < arr[q]; --q)
			arr[q + 1] = arr[q];
		arr[q + 1] = temp;
		if (flag3 == 1)
			break;

		for (m = 0; m <= N - 1; ++m)
			if (arr[m] != arr2[m])
			{
				flag2 = 1;
				break;
			}
		if (flag2 == 0)
			flag3 = 1;
	}

	for (m = 0; m <= N - 1; ++m)
	{
		printf("%d", arr[m]);
		if (m <= N - 2)
			printf(" ");
	}
	printf("\n");
}

void merge(int arr[], int low, int mid, int high)
{
	int i, k;
	int *tmp = (int *)malloc((high - low + 1)*sizeof(int));
	int left_low = low;
	int left_high = mid;
	int right_low = mid + 1;
	int right_high = high;

	for (k = 0; left_low <= left_high && right_low <= right_high; ++k)
	{
		if (arr[left_low] <= arr[right_low])
			tmp[k] = arr[left_low++];
		else
			tmp[k] = arr[right_low++];
	}
	if (left_low <= left_high)
		for (i = left_low; i <= left_high; ++i)
			tmp[k++] = arr[i];
	if (right_low <= right_high)
		for (i = right_low; i <= right_high; ++i)
			tmp[k++] = arr[i];

	for (i = 0; i < high - low + 1; ++i)
		arr[low + i] = tmp[i];
	free(tmp);
	return;
}

void merge_sort(int arr[], int arr2[], int N, int first, int last)
{
	int mid = 0, m, flag2, flag3 = 0, flag4 = 0;
	if (first < last)
	{
		mid = first / 2 + last / 2;
		merge_sort(arr, arr2, N, first, mid);
		merge_sort(arr, arr2, N, mid + 1, last);
		merge(arr, first, mid, last);
		
		if (flag3 = 1 && flag4 == 0)
		{
			for (m = 0; m <= N - 1; ++m)
			{
				printf("%d", arr[m]);
				if (m <= N - 2)
					printf(" ");
			}
			printf("\n");
			flag4 = 1;
		}
		for (m = 0; m <= N - 1; ++m)
			if (arr[m] != arr2[m])
            {
                flag2 = 1;
                break;
            }
        if (flag2 == 0)
            flag3 = 1;

	}
	return;
}
