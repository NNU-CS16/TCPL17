#include <stdio.h>
int is_sorted(int arr[], int left, int right)
{
    for(int i = left;i < right;i++)
    {
        if(arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}
void BubbleSort(int arr[], int left, int right)
{  
    int temp;  
    for (int i = right - 1; i >= left; i--)  
    {  
        for(int j = left; j <= i; j++)  
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
int main()
{
    int arr[100]; 
    int i, left, right;
    BubbleSort(arr, left, right);
    i = is_sorted(arr, left, right);
    if (i == 0)
	printf("Success\n");
	else
	    printf("Failed\n");

    return 0;
}  
