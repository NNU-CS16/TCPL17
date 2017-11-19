#include<stdio.h>

int Cishu(int n)
{
	if(n==1)
		return 1;
		return Cishu(n-1)*2+1;
}

int main()
{
int n;
scanf("%d",&n);
printf("An=%d",Cishu(n)*2);
return 0;
}
