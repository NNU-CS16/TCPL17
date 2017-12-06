  #include <stdio.h>
  #include <stdlib.h>
  int InsertionSort(int* temp, int* medium, int n);
  void MergeSort(int* temp, int* medium, int n);
  
  int main()
  {
      int n, *origin, *medium, *temp, i;
      scanf("%d",&n);
      origin = (int*)calloc(n, sizeof(int));
      medium = (int*)calloc(n, sizeof(int));
      temp = (int*)calloc(n, sizeof(int));
      for (i = 0; i < n; i++)
      {
          scanf("%d",origin + i);
      }
      for (i = 0; i < n; i++)
      {
          scanf("%d",medium + i);
      }
      for (i = 0; i < n; i++)
      {
          temp[i] = origin[i];
      }
      if (InsertionSort(temp, medium, n))
      {
          puts("Insertion Sort");
          printf("%d",temp[0]);
          for (i = 1; i < n; i++)
          {
              printf(" %d",temp[i]);
          }
      }
      else
      {
          for (i = 0; i < n; i++)
          {
              temp[i] = origin[i];
          }
          MergeSort(temp, medium, n);
          puts("Merge Sort");
          printf("%d",temp[0]);
          for (i = 1; i < n; i++)
          {
              printf(" %d",temp[i]);
          }
      }
      free(origin);
      free(medium);
      free(temp);
      return 0;
  }

  int InsertionSort(int* temp, int* medium, int n)
  {
      int i, j, l, flag = 0;
      for (i = 1; i < n; i++)
      {
          l = temp[i];
          for (j = i - 1; j >= 0; j--)
          {
              if (temp[j] > l)
              {
                  temp[j + 1] = temp[j];
              }
              else
                  break;
           }
           temp[j + 1] = l;
           for (j = 0; j < n && !flag; j++)
           {
               if (medium[j] != temp[j])
                   break;
           }
           if (j == n)
           {
               flag = 1;
               continue;
           }
           if (flag)
           {
               return 1;
           }
       }
       return 0;
  }

  void MergeSort(int* temp, int* medium, int n)
  {
      int left, middle, right, step = 1, i, j, k, flag = 0;
      int *intermedium = (int*)calloc(n, sizeof(int));
      for(; step < n; step *= 2)
      {
          for (left = 0, middle = step, right = ((middle + step > n) ? n : (middle + step)); middle < n;)
          {
              for (i = 0, j = 0, k = 0; i < step && middle + j < right;)
              {
                  if (temp[left + i] > temp[middle + j])
                  {
                      intermedium[k++] = temp[middle + j++];
                  }
                  else
                  {
                      intermedium[k++] = temp[left + i++];
                  }
              }
              while (i < step)
              {
                  intermedium[k++] = temp[left + i++];
              }
              while (middle + j < right)
              {
                  intermedium[k++] = temp[middle + j++];
              }
              while (--k >= 0)
              {
                  temp[left + k] = intermedium[k];
              }
              left = right;
              middle = left + step;
              right = middle + step > n ? n : middle + step;
          }
          for (i = 0; i < n && !flag; i++)
          {
              if (medium[i] != temp[i])
                  break;
          }
          if (i == n)
          {
              flag = 1;
              continue;
          }
          if (flag)
          {
              free(intermedium);
              return;
          }
      }
      free (intermedium);
      return;
  }
