 #include <stdio.h>

 int is_sorted(int arr[], int left, int right)
{
	int flag = 0, i;
	for (i = left; i < right; i++)
	{	
		if ( arr[i] <= arr[i+1])
			continue;
		else flag = 1;
	}
		return flag;
}
 
 int main()
{
	int str[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
				   11, 12, 13, 14, 15, 16, 17, 18, 19,20};
	int a, b, m;
	scanf("%d %d", &a, &b);
	m = is_sorted(str, a, b);
	if (m == 0)
		printf("IS\n");
	else
		printf("NOT\n");
	return 0;
}
