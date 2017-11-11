#include<stdio.h>
int GCD(int m,int n)
{
	int r;
	do
	{r=m%n;
	 if (r==0) 
	 break;
	 m=n;n=r;}
	while(1);

	return n;
}

int LCM(int m,int n)
{
	int A,a,b;
	A=GCD(m,n);

	a=m/A;b=n/A;

	return a*b*A;
}

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);

	printf("%d\n",LCM(a,b));

	return 0;

}
