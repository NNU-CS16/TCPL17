#include <stdio.h>
int main( )
{
    int arr[40001], n, i, j, k = 0;
    printf ("请输入数组大小：");
    scanf ("%d", &n);
    printf ("请输入数组：");
    for (i = 0; i < n; i++)
    {
	scanf ("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
	for (j = i + 1; j < n; j++)
	{
	    if (arr[i] > arr[j])
		k++;
	}
    }
    printf ("%d", k);
    return 0;
}
