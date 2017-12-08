#include <stdio.h>
int main()
{
	int arr[40000];
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	int k;
	for (k = 0; k < n; k++)
		scanf("%d",&arr[k]);
	int i,j;
	int p = 0;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			 	p++;
		}
	}
	printf("%d\n",p);
	return 0;
}	
