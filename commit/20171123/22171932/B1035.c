#include <stdio.h>
int main()
{
   int n, i, j, mid, flag;
   j = 0;
   flag = 1;
   printf("请输入N:\n");
   scanf("%d", &n);
   int arr1[n], arr2[n];
   printf("请输入原始数组：\n");
   for(i = 0; i < n; i++)
      scanf("%d", &arr1[i]);
   for(i = 0; i < n; i++)
      scanf("%d", &arr2[i]);
   mid = n;
   while(mid > 1)
   {
        mid = mid / 2;
        for(i = 0; i < mid; i++)
        {
            if(arr[i] >= arr[i + 1])
              flag = 0;
        }
        if (flag ==1)
        {
            for(i = mid + 1; i < n - 1; i++)
            {
            if(arr[mid] >= arr[mid + 1])
              flag = 0;
            }
        }
        j++;
   }
   while(flag == 1)
   printf("\n", j);
   return 0;
}
