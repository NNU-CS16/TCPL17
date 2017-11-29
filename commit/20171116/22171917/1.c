#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int main()
{
   int left, right, arr[100];
   scanf("%d%d", &left, &right);
   printf("%d\n", is_sorted( arr,left,right));
   return 0;
}

int is_sorted(int arr[], int left, int right)
{
   int i;
   for ( i = left; i <= right; i++ ) 
    if(arr[i] > arr[i+1])
       printf("有序");
     else
       printf("无序");
    return i;
}

   

