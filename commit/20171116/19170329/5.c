  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  void SelectionSort(int* arr, int left, int right);
  int is_sorted(int arr[], int left, int right); 


  int main()
  {
	int arr[100], left, right;
	int i, m;

	srand(time(NULL));

	for( i = 0; i < 100; i++)
	{
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");
	

	scanf("%d %d", &left, &right);
	SelectionSort( arr, left, right);
	

	for( i = left - 1; i < right; i++)
		printf("%d ", arr[i]);
	printf("\n");


	m = is_sorted( arr, left, right );
	if( m == 1 )
		printf("success\n");
	else
		printf("faied\n");

  	return 0;
  }


  void SelectionSort(int* arr, int left, int right)
  {
	int i, j, min, temp;
	for(i = left - 1; i < right - 1; i++)
	{
		min = i;
		for(j = i + 1; j < right; j++)
			if( arr[min] > arr[j] )
				min = j;
		if( min != i )
		{
			temp = *(arr + min);
			*(arr + min) = *(arr + i);
			*(arr + i) = temp;
		}
	}
  }


  int is_sorted( int arr[], int left, int right )
  {
		 
	int i;
	for( i = left - 1; i < right; i++)
	{
		if(arr[i] > arr[i + 1])
			return 0;
		return 1;
	}
  }	
