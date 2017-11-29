#include<stdio.h>
#include<math.h>

int max(int aj,int bj)
{
if(aj>bj)
return aj;
if(aj<=bj)
return bj;
}
int main()
{
int A,B;
int a[1000];
int b[1000];
int aj,bj;
scanf("%d%d",&A,&B);
int C=A,D=B;
for(int a1=0;A!=0;a1++)
{
	a[a1]=A%10;
	aj++;
	A=A/10;
}
for(int b1=0;B!=0;b1++)
{
	b[b1]=B%10;
	bj++;
	B=B/10;
}
int c[1001];
for(int k=aj;k>0;k--)
c[k]=a[k];
for(int m=bj;m>0;m--)
c[m]=c[m]+b[m];
for(int x=0;x<max(aj,bj);x++)
{
	if(c[x]>9)
	{
	c[x]=c[x]-10;
	c[x+1]=c[x+1]=1;
	}
}
for(int f=0;f<max(aj,bj);f++)
printf("%d",c[max(aj,bj)-f]);
/*if(c[max(aj,bj)+1]==0)
for(int r=max(aj,bj);r>0;r--)
printf("%d",c[r]);
if(c[max(aj,bj)+1]!=0)
for(int q=max(aj,bj)+1;q>0;q--)
printf("%d",c[q]);*/
return 0;
}
