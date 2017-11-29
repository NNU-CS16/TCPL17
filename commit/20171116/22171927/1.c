#include <stdio.h>
int is_sorted(int arr[],int left,int right);

int main()
{
	int arr[10];
	int left;
	int right;
	int i;
	printf("Please input left,right:");
	scanf("%d%d",&left,&right);
	printf("Please input arr[10]:");
	for (i=0; i<10; i++)
		scanf("%d" ,&arr[i]);
	is_sorted(arr,left,right);
	return 0;
}

int is_sorted(int arr[],int left,int right)
{
	int j;
	int k=0;
	int l=0;
	for(j=left; j<right; j++)
		if(arr[j+1]>=arr[j])
			k+=1;
	for(j=left; j<right; j++)
		if(arr[j+1]<=arr[j])
			l-=1;
	if(k==(right-left))
		printf("升序\n");
	else if(l==(left-right))
		printf("降序\n");
	else
        printf("no\n");
}



