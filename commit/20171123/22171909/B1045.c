 #include <stdio.h>

 int main()
 {
	int a, b, c, N, temp;
	int arr[N], res[N];
	int i, j, k = 1;
        scanf("%d", &N);
	for (i = 0; i < N; ++i)
	  scanf("%d", &arr[i]);
	for (j = 1; j < N; ++j)
	{
	  if (arr[j] >= arr[0])
		a = 0;
	  else
	  {
		a = -1;
		break;
	  }
	}
	if (a == 0)
	  res[0] = arr[0];
	for (i = 1; i < N; ++i)
	{
	  for (j = 0; j < i; ++j)
	  {
		if (arr[j] <= arr[i])
		  b = 0;
		else
		{
		  b = -1;
		  break;
		}
	  }
	  for (j = i + 1; j < N; ++j)
	  {
		if (arr[j] >= arr[i])
		  c = 0;
		else
		{
		  c = -1;
		  break;
		}
	  }
	  if (b == 0 && c == 0)
	  {
		res[k] = arr[i];
		k += 1;
	  }
	}
	printf("%d\n", k);
	for (i = 0; i < k - 1; ++i)
	  for (j = i; j < k - i - 1; ++j)
	if (res[j] > res[j + 1])
	{
	 temp = res[j + 1];
	 res[j + 1] = res[j];
	 res[j] = temp;
	}
  for (i = 0; i < k - 1; ++i)
  printf("%d ", res[i]);
  printf("%d\n", res[k-1]);
  return 0;
 }
