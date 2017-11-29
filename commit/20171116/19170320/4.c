#include <stdio.h>
void InsertionSort(int arr[], int left, int right);
int paixu(int arr[]);

int n;
int main()
{
    scanf("%d",&n);
    int a,left,right,i,*arr[n];
    scanf("%d %d",&left,&right);
    for (i=0; i<n; i++)
        scanf("%d",&*arr[i]);
    InsertionSort(arr[n], left, right);
    for (i=0; i<n; i++)
        printf("%d ",*arr[i]);
        return 0;
}

void InsertionSort(int arr[], int left, int right)
{
    int i,j;
    int temp;
    for (i=0; i<n; i++)
    {
        for (j=1; j<n; j++)
        {
            if (arr[j]<arr[i+1])
            {
                arr[j]^=arr[i+1];
                arr[i+1]^=arr[j];
                arr[j]^=arr[i+1];
            }
        }
    }
}

