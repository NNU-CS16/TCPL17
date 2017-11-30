#include<stdio.h>
#include<string.h>
void BubbleSort(int arr[], int left, int right);
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
     BubbleSort(arr,left,right);

     return 0;

}
void BubbleSort(int arr[], int left, int right)
{
    int i,j;
    int temp;
    for(i=left;i<right-1;i++)
        for(j=left;j<right-i;j++)
        if(arr[j]>=arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

        }
    printf("排序后的区间内数组：");
    for (i=left;i<right;i++)
        printf("%d",arr[i]);
    printf("\n");

}



