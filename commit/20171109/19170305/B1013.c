#include<stdio.h>
int prime(int);

int main()
{
int a[15000];
int n;
int m;
int M,N;
int i;
scanf("%d %d",&M,&N);
a[0]=2;
a[1]=3;
for(i=2,n=4;n<150000;n++)
{
if(prime(n)==1)
{a[i]=n;
i++;
continue;}
}
for(m=0,i=M;i<N;i++,m++)
{
if(m&&m%10==0)
  printf("\n");
printf("%d ",a[i]);
}
printf("\n");
return 0;
}

int prime(int n)
{
int j;
for(j=2;j<n;j++)
{if(n%j==0)
break;
}
if(j<n-1)
return 0;
else
return 1;
}
