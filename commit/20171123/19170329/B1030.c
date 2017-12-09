  #include <stdio.h>
  #include <stdlib.h>

  int comp( const void* a, const void* b )
  {
	return *(int*)a - *(int*)b;
  }

  int main()
  {
        int n, i, j;
	float p;
        int arr[100000];
        scanf("%d %f", &n, &p);
        for( i = 0; i < n; i++)
                scanf("%d", &arr[i]);
	qsort( arr, n, sizeof(int), comp);
	int len = 1;
	for( i = 0; i < n; i++ )
		for( j = i + len - 1; j < n; j++ )
			if( arr[j] <= arr[i] * p)
			{
				len = j - i + 1;
			}
			else  break;
	printf("%d\n", len);
		
	return 0;
  }
 
