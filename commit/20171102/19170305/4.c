#include<stdio.h>
int count1_in_bin(int);

int main()
{
int x[100];
int n;
scanf("%d",&n);
count1_in_bin(n);
return 0;
}

int count1_in_bin(int n)
{
int i,j=0,k=0;
int x[100];
while(n!=0)
{
i=n%2;
if(i==1)
x[j]=1;
else
x[j]=0;
j++;
n=n/2;
}
j--;
for(i=0;j>=0;j--)
{
if(x[j]==1)
k++;
else
k=k;
}
printf("%d\n",k);
}
