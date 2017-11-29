#include<stdio.h>


void BubbleSort(int b[],int left,int right)//增序排序
{
        int i,j,temp;
        for(i=0;i<right-left;i++)
                {
                for(j=left-1;j<right-i-1;j++)
                {
                if(b[j]>b[j+1])
                        {
                        temp=b[j];
                        b[j]=b[j+1];
                        b[j+1]=temp;
                        }
                }
                }
}


void SelectionSort(int arr[],int left,int right)
{
	int n=right-left+1;
	int b[right];
	for(int k=left;k<right;k++)
		b[k]=arr[k];
	BubbleSort(b,left,right);
	for(int m=left;m<right;m++)
		arr[m]=b[m];
}

int main()
{
	int arr[10]={1,10,2,9,3,8,4,7,5,6};
	int left,right;
	scanf("%d%d",&left,&right);
	SelectionSort(arr,left,right);
	for(int s=0;s<10;s++)
	printf("%d ",arr[s]);
	return 0;
}
