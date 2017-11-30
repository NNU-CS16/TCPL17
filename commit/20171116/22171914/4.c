#include <stdio.h>

void InsertionSort(int arr[],int left,int right)

{

    int i,j;

    int temp;

    for ( i=1; i<right-left+1;i++)

  {

      temp=arr[i];

      j=i-1;

      while ((j>=0)&& (temp<arr[j]))
      {

          arr[j+1]=arr[j];

          j--;

      }

      arr[j+1]=temp;

  }

}

int main()
{
    int arr[]={2, 10, 4, 5, 1, 9};

    int i=0;

    InsertionSort(arr,2,9);

    for(;i<=5;i++)

    printf("[%d]",arr[i]);

    return 0;

}
