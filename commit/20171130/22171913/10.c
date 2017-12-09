#include <stdio.h>
int main()
{
    int arr[20];
    int k;
    scanf("%d", &k);
    int i, j, count;   
    for (i = 0; i < k; i++)
	scanf("%d", &arr[i]);
    for (i = 0; i < k - 1; i++)
    {
	for (j = i + 1; j < k; j++)
	{
	    if (arr[i] > arr[j])
		count++;
	}
    }
    printf("%d\n", count);
    return 0;
}
