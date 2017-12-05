#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{
int arg1=*(const int*)a;
int arg2=*(const int*)b;
if(arg1<arg2) return -1;
if(arg1>arg2) return 1;
return 0;
}

int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
qsort(arr,n,sizeof(int),compare);
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
printf("\n");
return 0;
}
