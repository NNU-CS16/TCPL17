#include <stdio.h>
int main()
{
    int arr[40000];
    int n, i, j, k;
    j = 0;
    k = 0;
    printf("请输入N\n:");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
       scanf("%d",&arr[i]); 
    for(i = 0; i < n - 1; i++)
    {
       for(j = i + 1; j < n; j++)
       {
          if(arr[i] > arr[j])
          k++;
       }
    }
    printf("%d\n",k);
    return 0;
}	
