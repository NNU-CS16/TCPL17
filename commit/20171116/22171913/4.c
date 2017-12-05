#include <stdio.h>
#include <stdlib.h>
void Insertionsort(int arr[], int right, int left);
int main()
{
    int i, n, right, left;
    int arr[20];
    int num[10];
    while (scanf("%d", &n) != EOF)
    {
	for (i = 0; i < n; i++)
        {
	    scanf("%d", num + i);
	}
	Insertionsort(arr, right, left);
	for (i = 0; i < n; i++)
        {
	    printf("%d", num[i]);
	}
	printf("\n");
    }
    return 0;
}
void Insertionsort(int arr[], int right, int left)
{
    int i, j, t;
    int len = right - left;
    for (i = 0; i < len; i++)
    {
	t = arr[i];
	for (j = i - 1; j >= 0; j--)
	{
	    if (arr[j] > t)
	    {
		arr[j + 1] = arr[j];
	    }
	    else
		break;
	}
	arr[j + 1] = t;
    }
}
