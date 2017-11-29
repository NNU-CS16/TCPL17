#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void InsertionSort(int arr[], int left, int right);
int main()
{
    int left,right;
    int arr[10];
    int i;
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
     InsertionSort(arr[i],left,right); 
     for(i=0;i<10;i++)
        printf("regular");
        printf("%d",arr[i]);
        printf("\n");

        return 0;
}
   
void InsertionSort(int arr[], int left, int right)
{
    int temp,i,j;
    for(i=left;i<right;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&temp<arr[j])
        {
            arr[j+1]=arr[j]; 
            j--;
         }
         arr[j+1]=temp;
     }
}


















 
















