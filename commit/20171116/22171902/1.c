#include<stdio.h>
#include<string.h>
int is_sorted(int arr[], int left, int right);
int main()
{
    int arr[10];
    int left,right;
    printf("请输入数组：");
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("请输入区间：");
    scanf("%d %d",&left,&right);

    if(is_sorted(arr,left,right)==0)
        printf("有序");
    if(is_sorted(arr,left,right)==1)
        printf("无序");

    return 0;

}

int is_sorted(int arr[], int left, int right)
{
    int i,j;
    int flag;
    for(i=left;i<right-1;i++)
    {
      for(j=left+1;j<right;j++)
      {
          if(arr[i]<=arr[j])
         {
            flag=1;
            continue;
         }
           else
            {
              flag=0;
               break;
            }


        }
        }
 return flag;
}


