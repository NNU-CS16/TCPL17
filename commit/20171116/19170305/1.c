#include<stdio.h>
int is_sorted(int arr[], int left, int right);

int main()
{
int left,right;
int n,i;
scanf("%d",&n);
int arr[n];
scanf("%d %d",&left,&right);
for(i=0;i<n;i++)
scanf("%d",arr+i);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
//printf("\n");
//printf("%d",arr[5]);
printf("\n");
if(is_sorted(arr,left,right)==right)
printf("数组有序\n");
else
printf("数组无序\n");
return 0;
}

int is_sorted(int arr[], int left, int right)
{
int i;
if(arr[left]<=arr[left+1])
{
 for(i=left;i<right;i++)
 {
 if(arr[i]>arr[i+1])
  break;
 }
/* if(i<right-1)
 return 0;
 else
 return 1;*/
return i;
}
if(arr[left]>=arr[left+1])
{
 for(i=left;i<right;i++)
 {
 if(arr[i]<arr[i+1])
   break;
 }
/* if(i<right-1)
 return 0;
 else
 return 1;*/
return i;
}
}
