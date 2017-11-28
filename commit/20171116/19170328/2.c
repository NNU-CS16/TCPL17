#include<stdio.h>
void BubbleSort(int arr[], int left, int right)
{
    int m,n,temp;
    for (m=left;left < right-1; m++)
        for (n = left; n < right-1-left; n++)
        {
            temp = arr [n];
            arr [n] = arr [n+1];
            arr [n+1]=temp;
        }
}    

int is_sorted(int arr[], int left, int right)
{
    int flag=0, i;
    for (i = left; i<right; i++)
    {
        if(arr[i] <= arr[i+1])
            continue;
        else flag=1;
    }
        return flag;
}

int main()
{
  int i,m,n,p;
  int str[10];
  printf("Please input ten numbers and m n(1~10):\n");
  for (i=0; i<=9; i++)
      scanf("%d",&str[i]);
  BubbleSort(str,m ,n );
  p = is_sorted(str, m ,n);
  if (p == 0)
      printf("SUCCESS\n");
  else
      printf("LOSE\n");
  return 0;
}
