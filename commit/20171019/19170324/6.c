#include <stdio.h>
int main()
{
	int A,B,C;
	printf("请依次输入ABC三个球的重量：");
	scanf("%d %d %d",&A,&B,&C);

	if(C!=A==B) printf("C\n");
	else if(B!=A==C) printf("B\n");
	else if(A!=B==C) printf("A\n");
	else printf("这三个球的重量都相等。\n");

	return 0;
}
