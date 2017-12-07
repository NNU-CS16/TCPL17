  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  void MergeSort(int arr[], int left, int right);
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
	MergeSort( arr , left - 1, right - 1 );


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
  

  void MergeSort(int arr[], int left, int right)
  {
	int arr2[100] = {0};
	int mid = (left + right) / 2;
	if(left < mid) MergeSort( arr, left, mid ); //分解
	if(mid + 1 < right) MergeSort( arr, mid + 1, right ); //分解	  
	int i = left, j = mid + 1, k = 0;

	while( i <= mid && j <= right )  //已排好序的两个数组进行元素大小比较并放入合并数组
	{
		if( arr[i] <= arr[j] )
		{
			arr2[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			arr2[k] = arr[j];
			j++;
			k++;
		}
	}
	while( i <= mid ) //左半部分未扫描完时
	{
		arr2[k] = arr[i];
		i++;
		k++;
	}
	while( j <= right ) //右半部分未扫描完时
	{
		arr2[k] = arr[j];
		j++;
		k++;
	}
	for( k = left; k <= right; k++ )  //排序后的数组（其实并不知道怎么写）
		arr[k] = arr2[k - left];
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
