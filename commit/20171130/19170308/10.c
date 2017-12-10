#include<stdio.h>
#include<stdlib.h>
int divideandcombine(int,int,int [],int []);
int main()
{
int N,i,count=0;
scanf("%d",&N);
int arr[N],arr2[N];
for (i=0;i<N;i++)
	scanf("%d",arr+i);
count=divideandcombine(0,N-1,arr,arr2);
printf("%d\n",count);
for (i=0;i<N;i++)
	printf(" %d ",arr2[i]);
printf("\n");
return 0;
}

int divideandcombine(int begin,int end,int arr[],int arr2[])
{
int count=0;
int i=begin,j=begin,end1=(begin+end)/2,begin2=(begin+end)/2+1;
if (begin!=end)
{
	count+=divideandcombine(begin,(begin+end)/2,arr,arr2);
	count+=divideandcombine((begin+end)/2+1,end,arr,arr2);
while ((begin<=end1)&&(begin2<=end))
	if (arr[begin]<=arr[begin2])
		{
		arr2[i]=arr[begin];
		i++;begin++;
		}
	else 	{
		arr2[i]=arr[begin2];
		i++;begin2++;
		count+=end1-begin+1;
		}
if (begin>end1)
	while (begin2<=end)
	{
	arr2[i]=arr[begin2];
	i++;begin2++;
	}
else	while (begin<=end1)
	{
	arr2[i]=arr[begin];
	i++;begin++;
	}
for (;j<=end;j++)
	arr[j]=arr2[j];
return count;
}
return count;
}
