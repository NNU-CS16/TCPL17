#include<stdio.h>
int main()
{
	int x;
	printf("输入一个在0～153的正整数");
	scanf("%d",&x);
	printf("%d\n",x%10*100+x/10%10*10+x/100);
	return 0;
}

