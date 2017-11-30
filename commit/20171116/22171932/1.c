#include <stdio.h>
int is_sorted(int arr[], int left, int right);
int main()
{
    int arr[10];
    int left, right, i;
    printf("请输入数组:\n");
    for(i = 0; i < 10; i++)
       scanf("%d", &arr[i]);
    printf("请输入left,right:\n");
    scanf("%d%d", &left, &right);
    left = left + 1;
    right = right + 1;
    is_sorted(arr, left, right);
    return 0;
}
int is_sorted(int arr[], int left, int right)
{
    int b, i, j ,e;
    b = right - left + 1;
    e = left-1;
    int a[b];
    for(i = 0; i < b; i++)
        a[i] = arr[e],
        e++;
    for(i = 0; i < b-1; i++)
        if(a[i] > a[i+1])
          break;
    for(j = 0; j < b-1; j++)
        if(a[j] < a[j+1])
          break;
    if(i == b-1 )
      printf("升序。\n");
    else if(j == b-1)
      printf("降序。\n");
    else
      printf("无序。\n");
}    
