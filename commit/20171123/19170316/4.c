#include<stdio.h>

int add(int n1,int n2)
{
	int s;
	if(n2==0)
		return n1;
	int sum=n1^n2;
	s=(n1&n2)<<1;
	return add(sum,s);
}

int main ()
{
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("%d\n",add(n1,n2));
return 0;
}

