#include<stdio.h>
int is_sorted(int arr[],int left,int right);
int main()
{
    int arr[100]; 
    int left,right;
    printf("left= right= ");
    scanf("%d%d",&left,&right);
    if(is_sorted(arr,left,right)==0)
        printf("irregular");
    if(is_sorted(arr,left,right)==1)
        printf("regular");
    return 0;
}
     
int is_sorted(int arr[],int left,int right)
{
    int i;
    for(i=left;i<right-1;i++) 
    if (arr[i]>arr[i+1])
        return 0;
    else
        return 1;
} 
