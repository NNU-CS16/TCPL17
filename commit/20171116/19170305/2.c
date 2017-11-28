#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void BubbleSort(int arr[], int left, int right);
int sort(int arr[],int left,int right);

int main()
{
int n;
int i;
int left,right;
scanf("%d",&n);
int arr[n];
scanf("%d %d",&left,&right);
for(i=0;i<n;i++)
{
srand(time(NULL));
arr[i]=rand();
}
BubbleSort(arr,left,right);
return 0;
}

void BubbleSort(int arr[], int left, int right)
{
int i,j,temp;
for(i=left;i<right;i++)
  for(j=left;j<right-i;j++)
   {
    if(arr[j]<=arr[j+1])
     {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
     }
   }
if(sort(arr,left,right))
printf("排序正确\n");
else
printf("排序错误\n");
}

int sort(int arr[],int left,int right)
{
int i;
if(arr[left]<=arr[left]+1)
{
for(i=left;i<right;i++)
{if(arr[i]>arr[i+1])break;}
if(i<right)
return 0;
else
return 1;
}
if(arr[left]>=arr[left+1])
{
for(i=left;i<right;i++)
{if(arr[i]<arr[i+1])break;}
if(i<right)
return 0;
else
return 1;
}
}
