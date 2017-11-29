#include <stdio.h>
int is_sorted(int arr[], int left, int right);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int temp, left, right;
    printf("Please input left and right :\n");
    scanf("%d%d", &left, &right);
    temp=is_sorted(arr, left, right);
    if (temp=1)
      printf("有序\n");
    else
      printf("无序\n");
    return 0;
}
int is_sorted(int arr[], int left, int right)
{
    int temp=1;
    for (int i=left; i <= right; i++)
        if (arr[i]>arr[i+1])
        {
          temp=0;
          break;
        }
    if (temp == 0)
        return 0;
    if (temp == 1)
        return 1;
}
