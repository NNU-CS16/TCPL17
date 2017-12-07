#include <stdio.h>
void zhuyuan(int arr[],int a,int b);

void zhuyuan(int arr[],int a,int b)
{
   int j;
   for(j=0;j<a;j++)
    if(arr[j]>arr[a]) 
     return;
   for(j=a+1;j<b;j++)
    if(arr[j]<arr[a]) 
     return;
     printf("%d",arr[a]);
}
  
int main()
{
   int b,j;
   int arr[b];
   scanf("%d",&b);
   for(j=0;j<b;j++)
    scanf("%d",arr+j);
   for(j=0;j<b;j++)
    zhuyuan(arr,j,b);
   printf("\n");
   return 0;
}
  

  
  
