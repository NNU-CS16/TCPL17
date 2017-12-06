#include <stdio.h>
#include <stdlib.h>
void mergesort (int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
int main()
{
        int arr[8]={12,4,56,32,13,65,42,21};
        int left,right,i;
        scanf("%d%d",&left,&right);
        mergesort(arr,left,right);
        for(i=left-1;i<right;i++)
                printf("%d ",arr[i]);
        printf("\n");
        return 0;
}

void mergesort (int arr[], int left, int right)
{    
        if(left<right)
        {
        int mid = (right + left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
        }
}

void merge(int arr[], int left, int mid, int right)
{
        int *tmp = (int *)malloc((right-left+1)*sizeof(int));
                                                           
                        int i=left;
                        int j=mid+1;
                        int k=0;

                        while(i <= mid && j <= right)
                        {
                             if (arr[i] <= arr[j])
                             tmp[k++] = arr[i++];
                             else
                             tmp[k++] =arr[j++];
                        }

                        while(i <= mid)
                        tmp[k++] = arr[i++];

                        while(j <= right)
                        tmp[k++] = arr[j++];

                        for(i=0;i<k;i++)
                        arr[left + 1] = tmp[i];

                        free(tmp);
                        return;
}



                       
        

