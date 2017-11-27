#include <stdio.h>
int is_sorted(int arr[5], int left, int right);
int main()
{
    int arr[5],i;
    int left;
    int right;
    int m;
    scanf("%d%d", &left, &right);
    for (i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
    m=is_sorted(arr, left, right);
    return 0;
}
int is_sorted(int arr[5],int left,int right)
{
    int n=0,l=0,j;
    for (j = left; j < right; j++) 
        if (arr[j] >= arr[j+1])
            n += 1;
    for (j = left; j < right; j++)
        if (arr[j] <= arr[j+1])
            l += 1;
    if (n==(right - left))
        printf("down");
    else if (l==(right -left)) 
        printf("up");
    else
        printf("no");
}
    
    
    

