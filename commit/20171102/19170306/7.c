#include<stdio.h>
int GCD_recursive(int,int);
int GCD_iterative(int,int);
int main()
{
int n,m,temp;
scanf("%d,%d",&n,&m);
if (m>n) {temp=m;m=n;n=temp;}
printf("%d,%d\n",GCD_recursive(m,n),GCD_iterative(m,n));
return 0;
}

int GCD_recursive(int m,int n)
{
int temp;
while(n%m!=0)
	{
	temp=m;m=n%m;n=temp;
	}
return m;
}

int GCD_iterative(int m,int n)
{
if (n%m!=0)
	return GCD_iterative(n%m,m);
else return m;
}


