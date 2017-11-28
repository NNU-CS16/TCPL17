#include<stdio.h>
#include<math.h>
void sort(int [],int);
int main()
{
int N,i,j,m,n;
scanf("%d",&N);
int number[N];
	for (i=0;i<N;i++)
		scanf("%d",number+i);
	sort(number,N);
	for (i=(int)(sqrt(N));i>=1;i--)
		if (N%i==0)
		{m=N/i;n=i;break;}
int matrix[m][n];
void fullframe(int,int,int,int,int,int [][n],int*);
fullframe(n,m,n,0,0,matrix,number);
	for (i=0;i<m;i++)
		{
		for (j=0;j<n;j++)
			printf(" %5d ",matrix[i][j]);
		printf("\n");
		}
return 0;
}


void sort(int number[],int N)
{
int i,j,temp;
	for (i=1;i<N;i++)
		{
		for (j=0;j<i;j++)
			if (number[i]>number[j])
			break;
		temp=number[i];
		for (int k=i;k>j;k--)
			number[k]=number[k-1];
		number[j]=temp;
		}
}


void fullframe(int N,int m,int n,int y,int x,int matrix[][N],int* number)
{
if (n==0) return;
int i;
for (i=0;i<n-1;i++)
	{
	matrix[y][x]=(*number);
	x++;
	number++;
	}
for (i=0;i<m-1;i++)
	{
	matrix[y][x]=(*number);
	y++;
	number++;
	}
if (n==1)
	{
	matrix[y][x]=(*number);
	return;
	}
for (i=0;i<n-1;i++)
	{
	matrix[y][x]=(*number);
	x--;
	number++;
	}
for (i=0;i<m-1;i++)
	{
	matrix[y][x]=(*number);
	y--;
	number++;
	}
fullframe(N,m-2,n-2,y+1,x+1,matrix,number);
return;
}
