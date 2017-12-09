  #include <stdio.h>

  int main()
  {
	int source[100] ={0}, judge[100] = {0};
	int n, count = 0, i, j = 0, k = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &source[i]);
	
	int flag = 1;
	for(i = 1; i <= n; i++)
	{
		for(j = i + 1; j <= n; j++)  
		{			
			if( source [i] > source [j] )
				flag = 0;					//从该元素向两边扫描，判断元素是否为主元   (待优化)
				for( k = i - 1; k >= 0; k--)
				{
					if( source [i] < source [k])			  
						flag = 0;
				}
									
                               
		}
			
		if( flag == 1)		  //如果可能是主元，将该元素存入数组
		{
			judge [count] = source[i];
			count++;
		}
		flag = 1;
	}
	printf("%d\n", count);
	for(i = 0; i < count - 1; i++)  //打印可能的主元
		printf("%d ", judge[i]);
		printf("%d\n", judge[count - 1]);
	return 0;
  }
