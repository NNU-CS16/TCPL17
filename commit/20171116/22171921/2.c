#include<stdio.h>

void BubbleSort(int arr[], int left, int right)
{  
    int temp;  
    for (int i = right - 1;i >= left;i--)  
    {  
        for(int j = left;j <= i;j++)  
        {  
            if (arr[j] > arr[j + 1])  
            {  
                temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }  
}

int is_sorted(int arr[], int left, int right)
{
    for(int i = left;i < right;i++)
    {
        if(arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[5] = {2, 4, 1, 8, 6};
    int i;
    BubbleSort(arr, 4, 8);
    i = is_sorted(arr, 4, 8);
    if (i == 0)
	printf("yes\n");
	else
	    printf("no\n");
	    return 0;
}  
