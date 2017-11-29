#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void SelectionSort( int arr[], int left, int right)
{
    int i,j,n;
    for(i = left; i <= right; i++)
        for (j = i; j <= right; j++)
            if( arr[i]>arr[j])
            {
            int n = arr[i];
            arr[i] = arr[j];
            arr[j] = n;
            }
    for (i = left; i<=right; i++)
        printf("%d",arr[i]);
    printf("\n");
}
int main()
{
    int i,k[100];
    int a,b;
    for(i=0; i<100; i++)
        k[i]=rand()%10;
    scanf("%d%d",&a,&b);
    SelectionSort(k,a,b);
    return 0;
}
