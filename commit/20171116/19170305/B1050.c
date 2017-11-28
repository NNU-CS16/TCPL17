#include<stdio.h>
#include<math.h>
int main()
{
int N,m,n;
scanf("%d",&N);
int a[N];
int i,j,k,t=0;
int sum=0;
int temp;
for(i=1;i<=sqrt(N);i++)
{
if(N%i==0)
{n=i;m=N/n;}
}
int b[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
b[i][j]=0;

for(i=0;i<N;i++)
scanf("%d",a+i);
for(i=0;i<N-1;i++)
for(j=N-1;j>i;j--)
{
if(a[j-1]<a[j])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
}
}
b[0][0]=a[sum];
//for(i=0;i<N;i++)
//printf("%d\t",a[i]);
//printf("\n");
for(k=0;k<=n/2;k++)
{
for(i=k,j=k;j<n-k-1;j++)
{sum++;b[i][j+1]=a[sum];}
for(i=k,j=n-k-1;i<m-k-1;i++)
{sum++;b[i+1][j]=a[sum];}
for(i=m-k-1,j=n-k-1;j>k;j--)
{sum++;b[i][j-1]=a[sum];}
for(i=m-k-1,j=k;i>k+1;i--)
{sum++;b[i-1][j]=a[sum];}
if(n%2!=0)
{if(k+1<=n/2)
{sum++;
b[k+1][k+1]=a[sum];
continue;
}}
else
{if(k+1<n/2)
{sum++;
b[k+1][k+1]=a[sum];
continue;}}
}
for(i=0;i<m;i++)
for(j=0;j<n;j++,t++)
{
if(t&&t%n==0)
printf("\n");
printf("%d\t",b[i][j]);
}

printf("\n");
return 0;
}
