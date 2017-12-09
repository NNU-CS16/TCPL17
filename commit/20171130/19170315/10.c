  #include <stdio.h>
  
  int main()
  {
      printf("Please input n(n < 40000):\n");
      int n;
      scanf("%d",&n);
      int arr[n];
      int i;
      for (i = 0; i < n; i++)
      {
          scanf("%d",&arr[i]);
      }
      int count = 0;
      int j;
      for (i = 0; i < n; i++)
      {
          for (j = i; j < n; j++)
          {
              if (arr[i] > arr[j])
                  count++;
          }
      }
      printf("%d\n",count);
      return 0;
  }
