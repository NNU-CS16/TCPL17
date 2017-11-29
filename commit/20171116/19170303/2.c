#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void BubbleSort(int arr[], int left, int right)
{
    int i,j,temp,n;
    n=right-left+1;
    for (i=left; i<=right; i++)
        for (j=left; j<=n; j++)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    for (i=left; i<=right; i++)
        printf("%d",arr[i]);
    printf("\n");
}

int main()
{
int i,k[100];
int a,b;
for (i=0; i<100; i++)
    k[i]=rand()%10;
scanf("%d%d",&a,&b);
BubbleSort(k, a, b);
return 0;
}
