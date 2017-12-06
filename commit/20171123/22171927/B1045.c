#include <stdio.h>
int main()
{
	int N, count = 0;
	int array[100000],Imax[100000],rmin[100000];
	scanf("%d",&N);
	for (int i = 0; i < N; i++)
		scanf("%d",array+i);
	for (int i = 0, max = i; i < N; i++)
		Imax[i] = array[i] >= array[max]?array[max = i]:array[max];
	for (int i =N - 1,min = i; i >= 0; i--)
		rmin[i] = array[i] <= array[min]?array[min = i]:array[min];
	for(int i = 0; i < N; i++)
	{
		if(array[i] == Imax[i] && array[i] == rmin[i])
			count++;
		else
			array[i] = 0;
	}
	printf("%d\n",count);
	for (int i = 0; i < N && count; i++)
		if(array[i])
			printf("%d%c",array[i],--count?' ':'\0');
		printf("\n");
	return 0;
}
	 
