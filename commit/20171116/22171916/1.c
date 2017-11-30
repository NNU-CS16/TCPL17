#include<stdio.h>
int is_sorted(int arr[], int left, int right);
int main()
{
 int arr[100];
 int left,right,i;
 is_sorted(arr, left, right); 
 return 0;
}
int is_sorted(int arr[], int left, int right)
{
  int i;
  printf("请输入数组的左右区间：");
  scanf("%d %d",&left,&right);
  printf("请输入数组arr[]:");
  for (i=left;i<right+1;i++)
     scanf("%d",&arr[i]);
  int flag=0;
  for (i=left;i<right+1;i++)
  {
  if (arr[i]<=arr[i+1])
       {
        continue;
       }
  else
     {
        flag=1;
        break;
     }
        
  }
  if(flag==0)
     {
       printf("是有序数组");
     }
  else
    {
      printf("不是有序数组");
    }
}
