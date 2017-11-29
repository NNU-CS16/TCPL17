#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void BubbleSort(int arr[], int left, int right);
int main()
{
    int left,right;
    int arr[20];
    int i；
    srand(time(NULL));
        for(i=0;i<20;i++)
       {
            arr[i]=rand()%100;
            printf("irregular");
            printf("%d\n",arr[i]);
       }
     printf("left=");
     printf("\n");
     printf("right=");
     printf("\n");
     scanf("%d%d\n",&left,&right);
     BubbleSort(arr,left,right);
     for(i=0;i<20;i++)
        printf("regular");
        printf("%d",arr[i]);
        printf("\n");
     return 0；
}

void BubbleSort(int arr[], int left, int right)
{
     int i,n,temp;
     for (i=0;i<19;i++)
         for(n=0;n<19-i;n++)
             if(arr[n]>arr[n+1])
             {
                 temp=arr[n];
                 arr[n]=arr[n+1];
                 arr[n+1]=temp;
              }
}
