#include<stdio.h>

/*
int J(int n)//jiecheng n;
{
	int m,s;
	for(m=1;m<n;m++)
		s=s*m;
	return s;
}
阶乘，不过递归用不到              */
int BinomialCoefficient(int n,int k)
{
	if(k==0||n==k)
		return 1;
		return BinomialCoefficient(n-1,k-1)+BinomialCoefficient(n-1,k);
}
int main()
{
int k,n;
scanf("%d%d",&n,&k);
printf("%d",BinomialCoefficient(n,k));
return 0;
}
