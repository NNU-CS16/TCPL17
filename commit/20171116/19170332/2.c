#include<stdio.h>

int main()
{
int arr[1000];
int i=1;
for(i=1;i<=1000;i++)
    scanf("%d",&arr[i]);
int left ,right;
scanf("%d%d",&left,&right);
BubbleSort(arr[1000],left,right);
return 0;
}

void BubbleSort(int arr[], int left, int right)
{
     int i,temp;
     i=left;
     for(i=left;i<right;i++)
        { if(arr[i]>arr[i+1])
          {   temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
          }
           printf("%d",arr[i]);
       }
}     
  
        
