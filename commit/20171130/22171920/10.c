#include<stdio.h>  
#include<stdlib.h>    
long long MergePairsBetweenArray(int *arr,int *brr,int start,int mid,int end)  
{  
    int i = mid;  
    int j = end;  
    int k = end;  
    long long count = 0;  
    while(i>=start && j>=mid+1)  
    {  
        if(arr[i] > arr[j])  
        {  
            count += j-mid;  
            brr[k--] = arr[i--];  
        }  
        else  
            brr[k--] = arr[j--];  
    }   
    while(i>=start)  
        brr[k--] = arr[i--];  
    while(j>=mid+1)  
        brr[k--] = arr[j--];  
    for(i=end;i>k;i--)  
        arr[i] = brr[i];  
  
    return count;  
}  
   
long long CountMergePairs(int *arr,int *brr,int start,int end)  
{  
    long long PairsNum = 0;  
    if(start<end)  
    {  
        int mid = (start+end)>>1;  
        PairsNum += CountMergePairs(arr,brr,start,mid); 
        PairsNum += CountMergePairs(arr,brr,mid+1,end); 
        PairsNum += MergePairsBetweenArray(arr,brr,start,mid,end); 
    }  
    return PairsNum;  
}  
  
long long CountTotalPairs(int *arr,int len)  
{  
    if(arr==NULL || len<2)  
        return 0;  
  
    int *brr = (int *)malloc(len*sizeof(int));  
    if(brr == NULL)  
        exit(EXIT_FAILURE);  
  
    long long sum = CountMergePairs(arr,brr,0,len-1);  
    free(brr);  
    brr = NULL;  
  
    return sum;  
}  
  
int main()  
{  
    int n;  
    while(scanf("%d",&n) != EOF)  
    {  
        int *arr = (int *)malloc(n*sizeof(int));  
        if(arr == NULL)  
            exit(EXIT_FAILURE);  
  
        int i;  
        for(i=0;i<n;i++)  
            scanf("%d",arr+i);  
  
        printf("%lld\n",CountTotalPairs(arr,n));  
  
        free(arr);  
        arr = NULL;  
    }  
    return 0;  
}    
