    #include <stdio.h>
    #include <stdlib.h>
    void BubbleSort(int arr[], int left, int right)
    {   
        int temp;
	for(int i = left - 1; i <= right -1; i++)
	{
	    for(int j = i + 1; j <= right - 1; j++)
	    {
	        if(arr[i] > arr[j])
		{
		    temp = arr[i];
		    arr[i] = arr[j];
		    arr[j] = temp;	    
  		}
	   }
        }
    }
    int main()
    {
        int i, a[30];
	int right, left;
	for(i = 0; i < 30; i++)
	    a[i] = 1 + (int)(rand()%100);
	for(i = 0; i < 30; i++)
	    printf("%d ", a[i]);
	printf("\n");
	printf("please input left:");
	scanf("%d", &left);
	printf("please input right:");
	scanf("%d", &right);
	BubbleSort(a, left, right);
	for(i = 0; i < 30; i++)
	    printf("%d ", a[i]);
	printf("\n");
	return 0;
    }

