#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int arr[], int left, int right)
{  
    int i, j, temp;  
    for (i = left + 1; i <= right; i++) 
    {  
        temp = arr[i];  
        for (j = i; j > left; j--) 
        {  
            if (arr[j - 1] > temp)  
                arr[j] = arr[j - 1];  
            else  
                break;  
        }            
        arr[j] = temp;  
    }  
}

int is_sorted(int arr[], int left, int right)
{
    for (int i = left;i < right;i++)
    {
        if (arr[i] > arr[i + 1]) 
            return 0;
    }
        return 1;
}  

int main()
{
    int left,right;
    scanf("%d%d", &left, &right);
    int arr[100];
    for(int i = 0;i <= right;i++)
        arr[i] = rand() % (101);
        InsertionSort(arr, left, right);
        if (is_sorted(arr, left, right) == 1) 
        {
            printf("\n");
            for(int i = left;i <= right;i++)
                printf("%d ",arr[i]);
                printf("Yes\n");
        }
        if (is_sorted(arr, left, right) == 0)
            printf("No\n");
            return 0;
}
