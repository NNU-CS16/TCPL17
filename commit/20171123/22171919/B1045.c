#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int arr[N], res[N];
	int i, j, k = 1;
	for (i = 0; i < N; ++i)
	  scanf("%d", &arr[i]);
	int flag, flag1, flag2;
	/*判断第一个元素是否可能为主元*/
	for (j = 1; j < N; ++j)
	{
	  if (arr[j] >= arr[0])
		flag = 0;
	  else
	  {
		flag = -1;
		break;
	  }
	}
	if (flag == 0)
	  res[0] = arr[0];
	/*判断其他元素是否可能为主元*/
	for (i = 1; i < N; ++i)
	{
	  /*判断左边元素是否比它小*/
	  for (j = 0; j < i; ++j)
	  {
		if (arr[j] <= arr[i])
		  flag1 = 0;
		else
		{
		  flag1 = -1;
		  break;
		}
	  }
	  /*判断右边元素是否比它大*/
	  for (j = i + 1; j < N; ++j)
	  {
		if (arr[j] >= arr[i])
		  flag2 = 0;
		else
		{
		  flag2 = -1;
		  break;
		}
	  }
	  if (flag1 == 0 && flag2 == 0)
	  {
		res[k] = arr[i];
		k += 1;
	  }
	}
	/*输出*/
	printf("%d\n", k);
	int temp;
	for (i = 0; i < k - 1; ++i)
	  for (j = i; j < k - i - 1; ++j)
		if (res[j] > res[j+1])
		{
		  temp = res[j+1];
		  res[j+1] = res[j];
		  res[j] = temp;
		}
	for (i = 0; i < k - 1; ++i)
	  printf("%d ", res[i]);
	printf("%d\n", res[k-1]);
	return 0;
}
