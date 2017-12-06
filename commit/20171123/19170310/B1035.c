#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;
int origin[110],changed[110],temp[110],output[110];
bool equals(int A[], int B[], int len)
{
    for(int i=0; i<len; i++)
    {
        if(A[i]!=B[i])
        return false;
    }
    return true;
}
bool insertSort(int A[], int len)
{
    bool flag=false;
    for(int i=0;i<len;i++)
    {
        temp[i]=A[i];
    }
    for(int i=1;i<len;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(temp[j]<temp[j-1])
                swap(temp[j],temp[j-1]);
        }
        if(flag==true)
        {
            for(int k=0;k<len;k++)
                output[k]=temp[k];
                return true;
        }
        if(equals(changed,temp,len))
            flag=true;
    }
    return false;
}
void merge(int A[],int L1,int R1,int L2, int R2)
{
    int i=L1,j=L2;
    int store[110],index=0;
    while(i<=R1&&j<=R2)
    {
        if(A[i]<A[j])
            store[index++]=A[i++];
        else
            store[index++]=A[j++];
    }
    while(i <= R1)
        store[index++] = A[i++];
    while(j <= R2)
        store[index++] = A[j++];
    for(int k=0;k<index;k++)
    {
        A[L1+k]=store[k];
    }
}

bool mergeSort(int A[],int len)
{
    bool flag=false;
    for(int i=0;i<len;i++)
    {
        temp[i]=A[i];
    }

    for(int step=2;step/2<len;step*=2)
    {
        for(int i=0;i<len;i+=step)
        {
            int mid=i+step/2-1;
            if(mid+1<len)
            {
                merge(temp,i,mid,mid+1,min(len-1,i+step-1));
            }
        }
        if(flag==true)
        {
            for(int k=0;k<len;k++)
                output[k]=temp[k];
            return true;
        }
        if(equals(changed,temp,len))
            flag=true;
    }
    return false;
}
int main()
{
    int num=0,i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
{
        scanf("%d",&origin[i]);
    }
    for(i=0;i<num;i++)
{
        scanf("%d",&changed[i]);
    }
    if(insertSort(origin,num))
{
        printf("Insertion Sort\n");
        printf("%d",output[0]);
        for(i=1;i<num;i++)
            printf(" %d",output[i]);
    }
    if(mergeSort(origin,num))
{
        printf("Merge Sort\n");
        printf("%d",output[0]);
        for(i=1;i<num;i++)
            printf("%d",output[i]);
    }
    return 0;
}
