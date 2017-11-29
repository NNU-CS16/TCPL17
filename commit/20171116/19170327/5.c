#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void SelectionSort(int arr[], int left, int right); 

int main()
{
	int i,c[100];
	int a,b;
	for(i = 0;i < 100; i++)
		c[i]=rand()%10;
	scanf("%d%d",&a,&b);
	SelectionSort(c,a,b);
	return 0;
}

void SelectionSort(int arr[], int left, int right)
{
	int i,j,n;
	for(i == left; i <= right; i++)
		for(j = i;j <= right; i++)
			if(arr[i] > arr[j])
			{
				int n = arr[i];
				arr[i] = arr[j];
				arr[j] = n;
			}
	for(i = left; i <= right; i++)
		printf("%d",arr[i]);
	printf("/n");
}

