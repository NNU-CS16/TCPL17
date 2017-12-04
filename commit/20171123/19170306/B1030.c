#include<stdio.h>
#include<stdlib.h>
int search(int,int,int[],int);
int judge(int,int,int[],int);
int compare(const void* a,const void* b)
{
return (*(int*)a-*(int*)b);
}
int main()
{
int N,i,p;scanf("%d %d",&N,&p);
int arr[N];
for (i=0;i<N;i++) scanf("%d",arr+i);
qsort(arr,N,sizeof(int),compare);
printf("%d\n",search(0,N-1,arr,p));
return 0;
}

int search(int min,int max,int arr[],int p)
{
if (min>=max) return -1;
if (judge(min,max,arr,p)) return max-min+1;
if (judge(min+1,max,arr,p)) return max-min;
if (judge(min,max-1,arr,p)) return max-min;
search(min+1,max-1,arr,p);
}

int judge(int min,int max,int arr[],int p)
{
return arr[max]<=arr[min]*p;
}
