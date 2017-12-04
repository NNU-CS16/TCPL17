#include<stdio.h>
void Insertsortup(int arr[],int n);
void Insertsortdown(int arr[],int n);
int main()
{
int n,p,i,j,min,max;
scanf("%d %d",&n,&p);
int bef[n],num[n];
for(i=0;i<n;i++)
scanf("%d",bef+i);
for(i=0;i<n;i++)
num[i]=0;
Insertsortup(bef,n);
for(i=0;i<n;i++)
{
j=i;
while(bef[j]<=bef[i]*p&&j<n)
{
num[i]++;
j++;
}
}
Insertsortdown(num,n);
printf("%d\n",num[0]);
return 0;
}

void Insertsortup(int arr[],int n)
{
int i,j,temp;
for(j=1;j<n;j++)
{
temp=arr[j];
for(i=j-1;i>=0;i--)
{
if(arr[i]>temp)
{arr[i+1]=arr[i];arr[i]=temp;}
}
}
}
void Insertsortdown(int arr[],int n)
{
int i,j,temp;
for(j=1;j<n;j++)
{
temp=arr[j];
for(i=j-1;i>=0;i--)
{
if(arr[i]<temp)
{arr[i+1]=arr[i];arr[i]=temp;}
}
}
}
