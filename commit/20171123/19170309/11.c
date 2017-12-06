#include<stdio.h>
#include<stdlib.h>
int compare(const void *p,const void *q);
int main()
{
int n,i,key;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
scanf("%d",&key);
int *p;
qsort(arr,n,sizeof(int),compare);
p=(int *)bsearch(&key,arr,n,sizeof(int),compare);
if(p==NULL)
printf("404 Not Found!\n");
else
printf("Found!\n");
}
int compare(const void *p,const void *q)
{
return (*(int *)p-*(int *)q);
}

