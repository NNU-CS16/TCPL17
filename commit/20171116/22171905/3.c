#include<stdio.h>
int recursive(int arr[],int left,int right,int query)
{
	    int mid=(left+right)/2;
		    if(arr[left]==query) return left;
			    if(arr[right]==query) return right;
				    if(arr[mid]==query) return mid;
					    if(arr[mid]>query)
							return recursive(arr,left,mid,query);
						    if(arr[mid]<query)
							   return recursive(arr,mid,right,query);
							    return -1;
}
int iterative(int arr[],int left,int right,int query)
{
	    int mid=(left+right)/2;
		    for(;left<=right;)
			   {
				mid=(left+right)/2;
					if(arr[mid]==query)
					   return mid;
						if(arr[mid]>query)
						   right=mid-1;
						   if(arr[mid]<query)
							  left=mid+1;
														     }
			                 if(left>right)
					         return -1;
}
int main()
{
	    int left,right,query;
		int a[100];
		scanf("%d%d%d",&left,&right,&query);
		for(int i=0;i<=right;i++)
		scanf("%d",&a[i]);
		printf("%d\n",recursive(a,left,right,query));
		printf("%d\n",iterative(a,left,right,query));
		return 0;
}
