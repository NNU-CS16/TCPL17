#include<stdio.h>

int is_sorted(int arr[],int left,int right)
{
    for(int i=left;i<right;i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int left,right;
    int arr[100];
    scanf("%d%d", &left, &right);
    printf("%d\n", is_sorted(arr, left, right));
    return 0;
}
