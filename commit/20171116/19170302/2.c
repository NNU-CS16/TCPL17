#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Bubblesort(int arr[ ], int left, int right);

int main()
{
        int arr[100];
        int n;
        printf("n=");
        scanf("%d",&n);
        int left,right;
        scanf("%d%d",&left,&right);
        srand(time(NULL));
        for(int i=0;i<n;i++)
                arr[i]=rand()%100;
        Bubblesort(arr,left,right);
        return 0;
}

void Bubblesort(int arr[], int left, int right)
{
        int i,j,temp;
        for(i=left-1;i<right;i++)
        {
                for(j=left-1;j<right-i;j++)
                {
                        if(arr[j]>arr[j+1])
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                }
        }
        for(i=left-1;i<right;i++)
                printf("%d ",arr[i]);
        printf("\n");
}
                                

                  


