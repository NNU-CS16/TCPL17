#include <stdio.h>
#include <malloc.h>

void Merge(int src[], int des[], int low, int high, int mid)
{
    int i = low, k = low, j = mid + 1;
    while ((i <= mid) && (j <= high))
    {
	if (src[i] < src[j])
	    des[k++] = src[i++];
	else
            des[k++] = src[j++];
    }
    while (i <= mid)
	des[k++] = src[i++];
    while (j <= high)
	des[k++] = src[j++];
}
void Msort(int src[], int des[], int low, int high, int mid)
{
    int mid = (low + high) / 2;
    if (low == high)
    {
	des[low] = src[low];
    }
    else
    {
	int mid = (low + high) / 2;
	int *des_space = (int *)malloc(sizeof(int)*max_size);
	if(NULL != des_space)
        {
	    Msort(src, des_space, low, mid, max_size);
	    Msort(src, des_space, mid + 1, high, max_size);
	    merge(des_space, des, low, high, mid);
	}
	free(des_space);
    }
}
void Meger_sort(int a[], int low, int high, int l)
{
    Msort(a, a, low, high, l);
}
int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
	a[i] = rand()%100;
    printf("Before sort: \n");
    for(int i = 0; i < 10; i++)
	printf("%d", a[i]);
    Merge_sort(a, 0, 10 - 1, 10);
    printf("\nAfter sort: \n");
    for(int i = 0; i < 10; i++)
	printf("%d", a[i]);
    system("pause");
    return 0;
}
