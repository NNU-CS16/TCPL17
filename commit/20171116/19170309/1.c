#include<stdio.h>
int is_sorted(int arr[], int left, int right); 
int main()
{

int left,right,p,i;
int arr[20]={1,2,5,7,3,6,7,8,95,2,4,4,1,3,1,3,4,5,2,8};
for(i=0;i<20;i++)
  printf("%d", arr[i]);
printf("\n");
scanf("%d %d", &left,&right);
p=is_sorted(arr,left,right);
if(p==1)
printf("Yes");
else
printf("No");
return 0;
}

int is_sorted(int arr[], int left, int right)
{
int i,j,k;
for(i=j=left;i<right;i++)
    {if(arr[i]>=arr[i+1])
     j++;}
for(i=k=left;i<right;i++)
    {if(arr[i]<=arr[i+1])
     k++;}
if(j==right||k==right)
   return 1;
else return 0;     
}
