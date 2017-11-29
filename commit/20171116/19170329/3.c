  #include <stdio.h>
  int binary_search_recursive(int arr[], int left, int right, int query);
  int binary_search_iterative(int arr[], int left, int right, int query);

  int main()
  {
	int arr[100], left, right, query;
	int i, t=0;
	
	for( i=0; i<100; i++)
	{
		arr[i] = t;
		t++;
	}
	
	scanf("%d %d %d", &left, &right, &query);

	printf("%d\n",binary_search_recursive( arr, left, right, query ));
	printf("%d\n",binary_search_iterative( arr, left, right, query ));
	
	return 0;
  }

  
  int binary_search_recursive(int arr[], int left, int right, int query)
  {
	if( left > right ) return -1;
	else
	{
		if( left == query )
			return left;
		if( right == query )
			return right;
		
		int mid = left + (right - left) / 2;
		
		if( arr[mid] == query )
			return mid;
		else if( arr[mid] > query )
			return binary_search_recursive( arr, left, mid - 1, query );
		else 
			return binary_search_recursive( arr, mid + 1, right, query );
	
	}
  }

  int binary_search_iterative(int arr[], int left, int right, int query)
  {
	while( left <= right )
	{
		if( left == query )
			return left;
                if( right == query )
                        return right;

                int mid = left + (right - left) / 2;

                if( arr[mid] == query )
                        return mid;
                else if( arr[mid] > query )
			right = mid - 1;
		else 
			left = mid + 1;
		
	}
	if( left > right ) return -1;
  }


		
