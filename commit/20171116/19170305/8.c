#include<stdio.h>
int sum(int,int);
int main()
{
int N;
scanf("%d",&N);
int a[N][N];
int i,j,k,n=0;
for(i=0;i<N;i++)
for(j=0;j<N;j++)
{
if(i==0&&j==0)
a[i][j]=1;
else
a[i][j]=0;
}
for(k=1;k<=N/2;k++)
a[k][k]=sum(N,k)+1;
for(k=0;k<=N/2;k++)
{
for(i=k,j=k;j<N-k-1;j++)
a[i][j+1]=a[i][j]+1;
for(i=k,j=N-k-1;i<N-k-1;i++)
a[i+1][j]=a[i][j]+1;
for(i=N-k-1,j=N-k-1;j>k;j--)
a[i][j-1]=a[i][j]+1;
for(i=N-k-1,j=k;i>k+1;i--)
a[i-1][j]=a[i][j]+1;
}
//if(k>0)
//a[k+1][k+1]=a[k+1][k]+1;
//a[0][0]=1;
//for(k=1;k<=N/2;k++)
//a[k][k]=a[k][k-1];
for(i=0;i<N;i++)
for(j=0;j<N;j++,n++)
{if(n&&n%N==0)
printf("\n");
printf("%d\t",a[i][j]);
}
printf("\n");
return 0;
}

int sum(int N,int k)
{
int i,s=0;
for(i=0;i<=k-1;i++)
s=s+4*(N-2*i-1);
return s;
}
