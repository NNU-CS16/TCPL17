 #include <stdio.h>

 void BubbleSort(int arr[], int left, int right)
{
	int i, j, temp;
	for (i = left; i < right; i++)
		for (j = left; j < right ; j++)
			if(arr[j] > arr[j+1])
		{	
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
		}	
	
}
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
	int str[10] = {1, 3, 2, 7, 4, 9, 6, 5, 8, 10};
	int m;
	BubbleSort(str, 3, 8);
	m = is_sorted(str, 3, 8);
	if (m == 0)
		printf("SUCCESS\n");
	else
		printf("LOSE\n");
	return 0;
}
