#include <stdio.h>

int main()
{
	int N, i;
	scanf("%d", &N);
	int arr[N], tem[N],res[N];
	for (i = 0; i < N; ++i)
	  scanf("%d", &arr[i]);
	for (i = 0; i < N; ++i)
	  scanf("%d", &tem[i]);
	/*判断是插入排序还是归并排序*/
	int k = 0;
	while (tem[k] <= tem[k+1])
	  k += 1;
	int temp = k + 1, pro = tem[temp];
	int flag;
	for (k = k + 1; k < N; ++k)
	  if (tem[k] == arr[k])
		flag = 0;
	  else
	  {
		flag = -1;
		break;
	  }
	if (flag == 0)
	  printf("Insertion Sort\n");
	else
	  printf("Merge Sort\n");
	/*如果是插入排序，输出下一步迭代后的数组*/
	if (flag == 0)
	{
	  for (i = temp; tem[i-1] > pro; --i)
		tem[i] = tem[i-1];
	  tem[i] = pro;
	  for (i = 0; i < N - 1; ++i)
		printf("%d ", tem[i]);
	  printf("%d\n", tem[N-1]);
	}
	return 0;
}

