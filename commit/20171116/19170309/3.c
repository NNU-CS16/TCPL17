#include<stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main()
{
int n;
int i;
int left,right,query;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
for(i=0;i<n-1;i++)
{
if(arr[i]>=arr[i+1])
{printf("Wrong!\n");break;}
}
scanf("%d %d %d",&left,&right,&query);
if(binary_search_recursive(arr,left,right,query)==-1)
printf("Use recursion: No result!\n");
else
printf("Use recursion:query=arr[%d]\n",binary_search_recursive(arr,left,right,query));

if(binary_search_iterative(arr,left,right,query)==-1)
printf("Use iteration:No result!\n");
else
printf("Use iteration:query=arr[%d]\n",binary_search_iterative(arr,left,right,query));

return 0;
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
if(query==arr[left])
return left;
else if(query==arr[right])
return right;
else if(query<arr[left]||query>arr[right])
return -1;
else
{
if((left+right)%2==0)
{
if(right-left==2)
{
if(query!=arr[(left+right)/2])
return -1;
else
return (left+right)/2;
}
else
{
if(query<arr[(left+right)/2])
return binary_search_recursive(arr,left,(left+right)/2,query);
else if(query==arr[(left+right)/2])
return (left+right)/2;
else
return binary_search_recursive(arr,(left+right)/2,right,query);
}
}
else
{
if(right-left<2)
{
if(query==arr[(left+right-1)/2])
return (left+right-1)/2;
else if(query==arr[(left+right+1)/2])
return (left+right+1)/2;
else
return -1;
}
else
{
if(query==arr[(left+right-1)/2])
return (left+right-1)/2;
else if(query==arr[(left+right+1)/2])
return (left+right+1)/2;
else if(query<arr[(left+right-1)/2])
return binary_search_recursive(arr,left,(left+right-1)/2,query);
else
return binary_search_recursive(arr,(left+right+1)/2,right,query);
}}}}

int binary_search_iterative(int arr[], int left, int right, int query)
{
int middle;
while (1)
	{
	middle=(left+right)/2;
	if (arr[middle]==query) return middle;
		if (arr[middle]>query) right=middle;
		else 	left=middle;
	if (right-1==left)
		{
		if (arr[left]==query) return left;
		if (arr[right]==query) return right;
		return -1;
		}
	}
}
