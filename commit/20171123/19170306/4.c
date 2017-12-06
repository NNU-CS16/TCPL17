#include<stdio.h>
void input(int,short int[]);
int add(short int[],short int[]);
int main()
{
short int n1[32],n2[32];
int N1,N2;
scanf("%d %d",&N1,&N2);
input(N1,n1);input(N2,n2);
printf("%d\n",add(n1,n2));
return 0;
}

void input(int N,short int n[])
{
int i;
for (i=0;i<32;i++)
	n[i]=(N>>i)&1;
}

int add(short int n1[],short int n2[])
{
short int carry[32];
int i,sum=0;
for (i=0;i<32;i++)
	carry[i]=0;
for (i=0;i<32;i++)
	{
	if (n1[i]&n2[i]==1)
		carry[i+1]=1;
	n1[i]=(n1[i]^n2[i]);
	if (n1[i]&carry[i]==1)
		carry[i+1]=1;
	n1[i]=(n1[i]^carry[i]);
	}
for (i=31;i>=0;i--)
	{
	sum=(sum|n1[i]);
	sum=(sum<<1);
	}
return sum>>1;
}
