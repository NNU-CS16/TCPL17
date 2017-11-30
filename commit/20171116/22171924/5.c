#include <stdio.h>
#include <stdlib.h>
void SelectionSort(int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left; i < right; i++)
    {
	for (j = i + 1; j < right; j++)
	{
            if ( arr[i] > arr[j])
	    {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }
}
int is_sorted(int arr[], int left, int right)
{
    for(int i = left;i < right;i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
        else
            return 1;
    }
}
int main()
{
    int arr[100];  
    int left, right, i;
    scanf("%d%d", &left, &right);
    for (i = 0;i <= right;i++)
        arr[i] = rand() % (101);
        SelectionSort(arr, left, right);
        if (is_sorted(arr, left, right) == 1)
        {
            printf("Yes\n");
            for (i = left;i <= right;i++)
                printf("%d", arr[i]);
                printf("\n");
        }
        else
            printf("No\n");   
            return 0;
}
