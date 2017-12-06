#include <stdio.h>
int add(int n1, int n2)
{
	if(n2 == 0)
		return n1;
	
	int temp1,temp2;
	temp1 = n1 ^ n2;
	temp2 = (n1 & n2) << 1;

	return add(temp1,temp2);
}

int main()
{
	int n1,n2;
	printf("请输入两个整数");
	scanf("%d%d",&n1,&n2);
	printf("%d+%d=%d\n",n1,n2,add(n1,n2));

	return 0;
}
