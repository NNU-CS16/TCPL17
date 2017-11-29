  #include <stdio.h>
  int is_sorted(int arr[], int left, int right);
  int main()
  {
      int arr[100] = {0}, i, left, right, n;
      scanf("%d %d %d",&n,&left,&right);
      for (i = 0; i < n; i++)
      {
          scanf("%d",&arr[i]);
      }
      int x = is_sorted(arr, left, right);
      if(x == right - left)
          printf("数组无序");
      else
          printf("数组有序");
      return 0;
  }

  int is_sorted(int arr[], int left, int right)
  {
      int i, flag = 0;
      for(i = left; i <right; i++)
      {
          if(arr[i] >= arr[i + 1])
          flag++;
      }
      return flag;
  }

