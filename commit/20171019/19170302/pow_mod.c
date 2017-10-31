#include<stdio.h>
int main()
{ 
	int a,b,c;
	int n,i;
	double m;
	printf("a,b,c=:");
	scanf("%d,%d,%d",&a,&b,&c);
	for(m=1,i=1;i<=b;i++)
		m*=a;
	n=m%c;
	printf("%d\n",n);
	return 0;
}
