#include <stdio.h>
int main()
{
	int arr[10];
	int n;
	scanf("%d",&n);
	int i,j,count;
	for (i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				count++;
		}
	}	
	printf("%d",count);
	return 0;
}
