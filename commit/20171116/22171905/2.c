#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void BubbleSort(int arr[],int left,int right);
int main()
{
	int left,right,arr[10];
	int i;
	srand(time(NULL));
		for (i=0;i<10;i++)
			{
				arr[i]=rand()%100;
					printf(" %d ",arr[i]);
														}
			 printf("\n");
				scanf("%d %d",&left,&right);
					BubbleSort(arr,left,right);
						for (i=0;i<10;i++)
							printf(" %d ",arr[i]);
							printf("\n");
							return 0;
}

void BubbleSort(int arr[],int left,int right)
{
	int i,j,temp;
		for (i=left;i<right;i++)
					for (j=left;j<right-(i-left);j++)
									if (arr[j]>arr[j+1])
													{
																		temp=arr[j];
																						arr[j]=arr[j+1];
																										arr[j+1]=temp;
																																}
}
