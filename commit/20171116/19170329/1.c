  #include <stdio.h>
  int is_sorted( int arr[], int left, int right );

  int main()
  {
	int arr[10];
        int left, right,i;


	for( i = 0; i < 10; i++ )
	{
		scanf("%d", &arr[i]);
	}

	for( i = 0; i < 3; i++ ) 
        {
		scanf("%d %d", &left, &right);


		if(left < 1 || right > 10 || left > right)
			printf("illegal input.\n");
		else
		{
	
	        	int m = is_sorted( arr, left, right );
			if(m == 1) printf("Ordered Array.\n");
			else	printf("Disordered Array.\n");
		}
	}
       
	return 0;
	
  }


  int is_sorted( int arr[], int left, int right )
  {
	int i,t;
	
	for(i = left-1; i < right-1; i++)
	{
		if(arr[i] > arr[i + 1])		
			return 0;
		
        }
	return 1;

  }
	


  
