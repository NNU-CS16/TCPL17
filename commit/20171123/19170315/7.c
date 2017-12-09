  #include <stdio.h> 
  #include <stdlib.h> 
  void Merge(int arr[], int b[], int left, int mid, int right);
  void MergeSort(int arr[], int b[], int left, int right);

  int main(int argc, char *argv[])
  {
      int arr[8] = {50,10,20,30,70,40,80,60};
      int b[8];
      int left, right;
      scanf("%d %d",&left,&right);
      int i;
      MergeSort(arr, b, left, right);
      for (i = left; i <= right; i++)
          printf("%d ",arr[i]);
      printf("\n");
      return 0;
  }

  void Merge(int arr[], int b[], int left, int mid, int right)
  {
      int i = left, j = mid + 1, k = left;
      while(i != mid + 1 && j != right + 1)
      {
          if (arr[i] > arr[j])
              b[k++] = arr[j++];
          else
              b[k++] = arr[i++];
      }
      while(i != mid + 1)
      {
          b[k++] = arr[i++];
      }
      while(j != right + 1)
      {
          b[k++] = arr[j++];
      }
      for (i = left; i <= right; i++)
      {
          arr[i] = b[i];
      }
  }
  
  void MergeSort(int arr[], int b[], int left, int right)
  {
      int mid;
      if (left < right)
      {
          mid = (left + right) / 2;
          MergeSort(arr, b, left, mid);
          MergeSort(arr, b, mid, right);
          Merge(arr, b, left, mid, right);
      }
  }
      
