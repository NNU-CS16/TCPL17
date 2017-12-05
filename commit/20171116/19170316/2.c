#include<stdio.h>

void BubbleSort(int arr[],int left,int right)//增序排序
{
        int i,j,temp;
        for(i=0;i<right-left;i++)
                {
                for(j=left-1;j<right-i-1;j++)
                {
                if(arr[j]>arr[j+1])
                        {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        }
                }
                }
}
int main()
{
int arr[10]={12,2,1124,1,23,41,123,2,2,5};
int left,right;
scanf("%d%d",&left,&right);
BubbleSort(arr,left,right);
for(int s=0;s<10;s++)
printf("%d ",arr[s]);
return 0;
}
