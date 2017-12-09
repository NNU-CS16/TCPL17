  #include <stdio.h>
  #include <stdlib.h>
  void InsertionSort( int *target, int x , int n );
  int comp (const void *source, const void *target)
  {
    return *(int*)source - *(int*)target;
  }						 //待解决


  int main()
  {
	int source[100], target[100];
	int n, i, j;
	scanf("%d", &n);
	for( i = 0; i < n; i++)
		scanf("%d", &source[i]);
	for( i = 0; i < n; i++)
		scanf("%d", &target[i]);
	int flag = 0, k = 0;
	while( target [k] < target [k + 1]) 
	{	
		 k++;
	}
	
	for( i = k + 1; i < n; i++ )
	{
		if(target[i] != source[i])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 0)				//判断数组为插入排序还是归并排序
	{
		printf("Insertion Sort\n");
		InsertionSort( target, k, n );
		for(i = 0; i < n; i++)
			printf("%d ", target[i]);
	}


	else if(flag == 1)
	{
		printf("Merge Sort\n");
		for(int len = 1, i = 0; i < n && len <= n; len *= 2)
		{
			 for (i = 0; i < n && source[i] == target[i]; i++);
		         for (j = 0; j < n / len; j++)
      		         qsort (source + j * len, len, sizeof(int), comp);
	  	         qsort (source + j * len, n % len, sizeof(int), comp);
	        } 					 //待解决
		for(i = 0; i < n; i++)
			printf("%d ", source[i]);
	}

	return 0;
  }


  void InsertionSort( int *target, int k, int n )    //进行一次插入排序
  {
	int i, j, temp;
	for( i = k + 1; i < n; i++)
	{
		temp = *(target + i);
		for(j = i; j > 0 && *(target + j - 1) > temp; j--)
		{
			*(target + j) = *(target + j - 1);
		}
		*(target + j) = temp;
		break;
	}
  }
	
