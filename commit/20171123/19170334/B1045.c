#include <stdio.h>//PAT 1045. 快速排序

int main()
{
	int n;
	int a[100], b[100];
	int i, j, k = 0;
	int flag = 1;
	int num = 0;
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[j] > a[i])
			{
				flag = 0;
				break;
			}
		}
		for(j = n - 1; j > i; j--)
		{
			if(a[j] < a[i])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			num++;
			b[k++] = a[i];
		}
		flag = 1;
	}
	printf("%d\n", num);
	for(i = 0; i < num - 1; i++)
		printf("%d ", b[i]);
	printf("%d\n", b[i]);
	return 0;
}
