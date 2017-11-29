#include <stdio.h>
#include <string.h>
void BubbleSort(int arr[10],int left,int right);
void BubbleSort(int arr[10],int left,int right)
{
   int i,j,temp;
   for(i=0;left<i<right-1;i++)
 
     for(j=0;j<right-1-i;j++)
     if(arr[j]>arr[j+1])
     {
        temp=arr[j];
        arr[j]=arr[j+1]; 
        arr[j+1]=temp;
     }
}
int main()
{
  int arr[10],i,right,left;
  while(scanf("%d",&right)!=EOF)
  {
    for(i=0;i<right;i++)
    scanf("%d",arr+i);
    BubbleSort(arr,left,right);
    for(i=0;i<right;i++)
    printf("%d",arr[i]);
    printf("\n");
  }
  return 0;
} 
