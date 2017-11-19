#include <stdio.h>
int main()
{
	int A,B,D;
	scanf("%d%d%d",&A,&B,&D);
	int sum = A + B;
	int n[1000] = {0};
	int count = 0;
	if(sum = 0)
	{
		printf("0");
	return 0;
	}
	while(sum > 0)
	{
		n[count++] = sum % D;
		sum /= D;
	}
	for(int i = count - 1;i >= 0;i--)
	{
		printf("%d",n[i]);
	}
	return 0;
}


