#include<stdio.h>
int insertionsort(int[],int,int[]);
void mergesort(int[],int,int[]);
void sort(int,int,int,int,int[],int[]);
int main()
{
int N,i;
scanf("%d",&N);
int arr[N],arr2[N],target[N];
for (i=0;i<N;i++){scanf("%d",arr+i);arr2[i]=arr[i];}
for (i=0;i<N;i++)scanf("%d",target+i);
if (insertionsort(arr,N,target)==1) 
	{
	printf("insertionsort\n");
	for (i=0;i<N;i++) 
	printf(" %d ",arr[i]);
	printf("\n");
	}
else 	{
	printf("mergesort\n");
	mergesort(arr2,N,target);
	printf("\n");
	}
return 0;
}

int insertionsort(int arr[],int N,int target[])
{
int i,j,t,min,temp,sig=0;
for (i=1;i<N;i++)
	{
	for (j=0;j<i&&arr[i]>arr[j];j++);
	temp=arr[i];
	for (t=i;t>j;t--) arr[t]=arr[t-1];
	arr[j]=temp;
	for (t=0;t<N;t++)
	if (arr[t]!=target[t])break;
	if (sig==1) break;
	if (t==N) sig=1;
	}
return sig;
}

void mergesort(int arr[],int n,int target[])
{
int groupbegin[n],groupend[n],temp[n];
int i,j,group=n,t;
for (i=0;i<n;i++) {groupbegin[i]=i;groupend[i]=i;}
while (group!=1)
        {
        temp[n-1]=arr[n-1];
        for (i=0;i<group/2;i++)
                sort(groupbegin[i*2],groupend[i*2],groupbegin[i*2+1],groupend[i*2+1],arr,temp);
	for (t=0;t<n;t++)
		if (arr[t]!=target[t]) break;
		if (t==n)
			{
			for (i=0;i<n;i++)
			printf(" %d ",temp[i]);
			return;
			}
	for (i=0;i<n;i++)
                arr[i]=temp[i];
        for (i=0;i<group/2;i++)
                {
                groupbegin[i]=groupbegin[i*2];
                groupend[i]=groupend[i*2+1];
                }
        if (group%2==1) {groupbegin[i]=groupbegin[i*2];
                         groupend[i]=groupend[i*2];}
        group=(group+1)/2;
        }
}

void sort(int a1,int b1,int a2,int b2,int arr[],int temp[])
{
int i=a1;
while (a1<=b1&&a2<=b2)
        if (arr[a1]<=arr[a2])
        {temp[i]=arr[a1];i++;a1++;}
        else
        {temp[i]=arr[a2];i++;a2++;}
if (a1>b1)
        while (a2<=b2){temp[i]=arr[a2];a2++;i++;}
else    while (a1<=b1){temp[i]=arr[a1];a1++;i++;}
}
                                     
