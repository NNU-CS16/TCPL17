nclude<stdio.h>
#include<time.h>
#include<stdlib.h>
void SelectionSort(int arr[], int left, int right); 
int main()
{
    int left,right;
    int arr[10];
    int i；
    srand(time(NULL));
        for(i=0;i<10;i++)
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
     for(i=0;i<10;i++)
        printf("regular");
        printf("%d",arr[i]);
        printf("\n");
     return 0；
}

void SelectionSort(int arr[], int left, int right)
{
    register int i,j,min,m;
    for(i=0;i<9;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
        {
            if(A[min]>A[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(&A[min],&A[i]);
            printf("第%d趟排序结果为:\n",i+1);
            for(m=0;m<10;m++)
            {
                if(m>0)
                {
                    printf("");
                }
                printf("%d",A[m]);
            }
            printf("\n");
        }
    }
}






