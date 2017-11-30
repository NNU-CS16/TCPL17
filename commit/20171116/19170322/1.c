    #include <stdio.h>
    int is_sorted(int arr[], int left, int right)
    {
        int i, flag = 0;
	for(i = left - 1; i <= right - 2; i++)
	{
	    if(arr[i] > arr[i + 1])
                flag++;
	}
	if(flag == right - left)
            return -1;
	else
	    return 1;
    }
    int main()
    {
        int a[15], right, left;
	printf("please input a[15]:\n");
	for(int i = 0; i <= 14; i++)
	    scanf("%d", &a[i]);
	printf("please input left:");
	    scanf("%d", &left);
	printf("please input right:");
	    scanf("%d", &right);
        if(is_sorted(a, left, right) == -1)
            printf("无序");
	else
	    printf("有序");
	return 0;
    }


