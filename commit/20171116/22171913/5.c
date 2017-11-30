#include <stdio.h>
void Selectionsort(int arr[], int right, int left);
int main()
{
    int right, left, n, i;
    int arr[n];
    scanf("%d %d %d", &n, &right, &left);
    for (i = 0; i < n; i++)
    {
	scanf("%d", arr + i);
    }
    Selectionsort(arr, right, left);
    return 0;
}
void Selectionsort(int arr[], int right, int left)
{
    int min, t, i, j;
    for (i = left; i < right; i++)
    {
	min = i;
	for (j = i + 1; j <= right; j++)
        {
	     if (arr[j] < arr[min])
		 min = j;
	}
	if (min != i)
	{
            t = arr[i];
	    arr[i] = arr[min];
	    arr[min] = t;
        }
    }
	for (i = left; i <= right; i++)
	    printf("%d", arr[i]);
	printf("\n");
}




