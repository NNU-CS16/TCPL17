#include <stdio.h>
int is_sorted(int arr[],int left,int right);

int main()
{
    int arr[]={2,5,4,6,7,8,9,11,12,13,14,17};
    int left ,right;
    scanf("%d%d",&left,&right);
    if (is_sorted(arr,left,right)==1)
        printf("ordered\n");
    else
    {
         printf("unordered\n");
    }
    return 0;
}

int is_sorted(int arr[],int left,int right)
{
    int i,flag=1;
    for (i=left;i<right;i++)
    {
        if (arr[i]<=arr[i+1])
            continue;
        else
        {
            flag=0;
            break;
         }            
     }
     return flag;
}
