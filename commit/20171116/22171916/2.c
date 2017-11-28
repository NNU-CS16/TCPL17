#include<stdio.h> /* 利用冒泡排序排序区间内数组*/
void BubbleSort(int arr[], int left, int right)
{
  int i,j,temp;
  printf("请输入数组区间：");
  scanf("%d%d",&left,&right);
  printf("请输入数组：");
  for (i=left;i<right+1;i++)
    scanf("%d",&arr[i]);
  for (i=left;i<right;i++)
    for (j=left;j<right-i;j++)
       if (arr[j]>arr[j+1])
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
  printf("排序后：");
  for (i=left;i<right+1;i++)
    printf("%d ",arr[i]);
  printf("\n");
 
}
int main()
{
   int left,right;
   int arr[100];
   BubbleSort(arr,left,right);
   return 0;
}
