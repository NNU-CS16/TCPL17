  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  void BubbleSort(int arr[], int left, int right);
  int is_sorted(int arr[], int left, int right);  

  int main()
  {
	int arr[100], left, right;
	int i;

	srand(time(NULL));
	for(i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ",arr[i]);
	}
	printf("\n");

        scanf("%d %d", &left, &right);
	if(left > right) printf("illegal input.\n");
	else
		BubbleSort( arr, left,  right);
	return 0;
  }

  void BubbleSort(int arr[], int left, int right)
  {
	int i,j,temp;
	for(i = (left - 1); i < right ; i++)
		for(j = (left -1); j < right - 1 - i; j++)
			if( arr [j] > arr [j + 1] )
			{
				temp = arr [j];
				arr [j] = arr [j + 1];
				arr [j + 1] = temp;
			}
	for(i = left - 1; i < right ; i++)
		printf("%d ", arr [i]);
		printf("\n");
        int m = is_sorted( arr, left, right);
	if(m == 0) printf("Success\n");
	else printf("Failed\n");
  }
	 
				 
  int is_sorted( int arr[], int left, int right )
  {
        int i,t;

        for(i = left-1; i < right-1; i++)
        {
                if(arr[i] > arr[i + 1])
                        return 1;
		else return 0;

        }
	 
  }		
