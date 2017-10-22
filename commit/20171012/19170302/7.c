#include<stdio.h>
int main()
{
		int i;
		scanf("%d",&i);
		int as=i%10;
		int sd=i/10%10;
		int df=i/100;
		printf("%d",df+sd*10+as*100);
		return 0;
}
