#include<stdio.h>
void BubbleSort(int arr[], int left, int right); 
int main()
{
int arr[100]={1,3,4,5,6,2,4,6,8,3,5,6,3,6,6,3,8,9,34,32};
int left,right,i;
scanf("%d %d", &left,&right);
printf("Before:");
for(i=left;i<=right;i++)
  printf("%d", arr[i]);
printf("\nAfter:");
BubbleSort(arr, left, right); 
printf("\n");
return 0;
}
void BubbleSort(int arr[], int left, int right)
{
int i,j,t;
for(i=left;i<=right;i++)
  {for(j=left;j<=right;j++)
     {if(arr[j]>=arr[j+1])
       {t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;}}}
for(i=left;i<=right;i++)
  printf("%d", arr[i]);
}
