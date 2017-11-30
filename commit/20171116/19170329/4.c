  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  void InsertionSort(int *arr, int left, int right);
  int is_sorted( int arr[], int left, int right );

  int main()
  {
	int arr[100], left, right;
	int i, m;
	srand(time(NULL));

	for( i=0; i<100; i++)
	{
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	scanf("%d %d", &left, &right);
	InsertionSort( arr , left, right );


	for( i = left -1; i < right; i++ )
		printf("%d ", arr[i] );

	printf("\n");
	is_sorted( arr, left, right );
	
	m = is_sorted( arr, left, right );	

	if(m == 1)
		printf("success\n");
	else
		printf("failed\n");
	return 0;
  }

  void InsertionSort( int *arr, int left, int right )
  {
	int i, j, temp;
	for( i = left; i < right; i++)
	{
		temp = *(arr + i);
		for(j = i; j > 0 && *(arr + j -1) > temp; j--)
		{
			*(arr + j) = *(arr + j -1);
		}
		*(arr + j) = temp;
	}
  }

  int is_sorted( int arr[], int left, int right )
  {
	int i,j;
	for( i = left - 1; i < right; i++ )
	{
		if( arr[i] > arr[i + 1] )
			return 0;
		return 1;
	}
  }
