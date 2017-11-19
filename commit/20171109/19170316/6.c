#include<stdio.h>

int C(int n)//Cishu n
{
	if(n==1)
		return 2;
		return C(n-1)*3+2;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d",C(n));
return 0;
}
