#include <stdio.h>
void BubbleSort(int arr[], int left, int right);

int n;
int main()
{
    scanf("%d",&n);
    int *arr[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&*arr[i]);
    int left,right;
    scanf("%d %d",&left,&right);
    BubbleSort(arr[n], left, right);
    for (i=0; i<n; i++)
        printf("%d ",*arr[i]);

    return 0;
}

void BubbleSort(int arr[], int left, int right)
{
    int i,j,temp;
    arr[0]=left;
    arr[n-1]=right;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}
