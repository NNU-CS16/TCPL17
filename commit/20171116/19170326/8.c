#include<stdio.h>

int main()
{
	int a[20][20];
	int N;
	scanf("%d",&N);
	int i,p=0;
	int row,column;
	for(i=0; i<=(N-1)/2; i++)
	{
		
		for(row=i,column=i; column<N-i; column++)
			a[row][column]=++p;
		for(row=i+1,column=N-i-1;row<N-i;row++)
			a[row][column]=++p;
		for(row=N-i-1,column=N-i-2;column>=i;column--)
			a[row][column]=++p;
		for(row=N-i-2,column=i;row>i;row--)
			a[row][column]=++p;
	}
	for(row=0; row<N; row++)
	{
		for(column=0; column<N; column++)
			printf("%d ",a[row][column]);
		printf("\n");
	}
	return 0;
}
