#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void divideandcombine(int,int,int [],int []);
int main()
{
srand(time(NULL));
int N,i;
scanf("%d",&N);
int arr[N],arr2[N];
for (i=0;i<N;i++)
    {
    arr[i]=rand()%100+1;
    printf(" %d ",arr[i]);
    }
    printf("\n");
divideandcombine(0,N-1,arr,arr2);
for (i=0;i<N;i++)
    printf(" %d ",arr2[i]);
printf("\n");
return 0;
}

void divideandcombine(int begin,int end,int arr[],int arr2[])
{
if (begin!=end)
{
int i=begin,j=begin,end1=(begin+end)/2,begin2=(begin+end)/2+1;
    divideandcombine(begin,(begin+end)/2,arr,arr2);
    divideandcombine((begin+end)/2+1,end,arr,arr2);
while ((begin<=end1)&&(begin2<=end))
    if (arr[begin]<=arr[begin2])
        {
        arr2[i]=arr[begin];
        i++;begin++;
        }
    else    {
        arr2[i]=arr[begin2];
        i++;begin2++;
        }
if (begin>end1)
    while (begin2<=end)
    {
    arr2[i]=arr[begin2];
    i++;begin2++;
    }
else    while (begin<=end1)
    {
    arr2[i]=arr[begin];
    i++;begin++;
    }
for (;j<=end;j++)
    arr[j]=arr2[j];
}
}
