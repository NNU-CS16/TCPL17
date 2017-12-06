#include<stdio.h>

int main()
{
int arr[1000];
int m=0;
for(m=0;m<1000;m++)
scanf("%d",&arr[m]);
int left,right;
scanf("%d%d",&left,&right);
InsertionSort(arr[1000],left,right);
for(m=0;m<1000;m++)
printf("%d",arr[m]);
return 0;
}


void InsertionSort(int arr[], int left, int right)
{
int i,j;
int temp;
for(i=left+1;i<right;i++)
{
temp=arr[i];
j=i-1;
while((j>=0)&&(arr[j]>temp))
{
arr[j+1]=arr[j];
j--;
}
if(j!=i-1)
{arr[j+1]=temp;}
}

}

