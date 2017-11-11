#include<stdio.h>
int GCD_recursive(int m,int n)
{
   if(n!=0)
   GCD_recursive(n,m%n);
   return m;
}  
int GCD_iterative(int a,int b)
{
	int r;
	do
          {
	     r=a%b;
	     a=b;
	     b=r;
	  }while(r!=0);
	return a;
}
int main()
{
	int m,n,a,b;
	scanf("%d%d",&m,&n);
	a=(m>n?m:n);
	b=(m<n?m:n);
	printf("%d",GCD_iterative(a,b));
	printf("%d",GCD_iterative(a,b));
	return 0;
}
