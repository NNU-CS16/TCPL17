#include<stdio.h>
int main()
{
int n,i,j,num=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
num++;
}
printf("%d\n",num);
return 0;
}
