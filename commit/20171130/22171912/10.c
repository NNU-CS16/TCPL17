/*10.c_逆序数*/
#include <stdio.h>
int main()
{
	int n, arr[40001], i, j, c;
	printf("请输入数组大小n：");
	scanf("%d",&n);
	printf("请输入数组：");
	for (i = 0; i < n; ++i)
		scanf("%d",&arr[i]);
	for (i = 0, c = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			 	c++;
		}
	}
	printf("%d\n", c);
	return 0;
}	
