#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int arr[], int left, int right)
{
	int i,j,temp;
	for(j = left; i<right; i++)
		for(i = left; i<right; i++)
		{
			if(arr[i+1] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
}

int main()
{
	int i,arr[20];
	int left,right;

	scanf("%d%d",&left,&right);
	srand(time(NULL));
	i = 0;
	while(i < 20)
		i++;
		arr[i] = rand()%100;
	BubbleSort(arr, left, right);
	i = left;
	while(i <= right)
		i++;
		printf("%d\n",arr[i]);

	return 0;

}


