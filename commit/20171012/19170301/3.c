#include<stdio.h>
int main()
{
	int a,n,i;
	printf("a=,n=\n");
        scanf("%d,%d",&a,&n);
	long int s=0,t=0;
        for(i=0;i<n;i++)
	{
		t=t+a;
		s=s+t;
		a=a*10;
	}
	printf("a+aa+...=%ld\n",s);
        return 0;
}
