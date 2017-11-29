#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InsertionSort( int arr[], int left, int right )
{

	int i, j, n;
	for ( i = left + 1; i <= right; i++ )
	{
		n = arr[i];
		for ( j = i - 1; j >= left; j-- )
			if ( n < arr[j] ) arr[j + 1] = arr[j];
			else break;
		arr[j + 1] = n;
	}	
    for(i = left + 1; i <= right; i++)
        printf("%d",arr[i]);
        printf("\n");
}

int main()
{
    int i,k[100];
    int a,b;
    for (i=0; i<100; i++)
        k[i]=rand()%10;
    scanf("%d%d",&a,&b);
    InsertionSort(k,a,b);
    return 0;
}
