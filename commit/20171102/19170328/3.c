#include <stdio.h>
#include <stdlib.h>
int is_pow2(int n)
{
	if (n==1)
		return 0;
	else 
		return 1+is_pow2(n>>1);
}

       
int main(void)
{
	int num;
	printf("Please input a number:");
	scanf("%d",&num);
if (num&(num-1))	
	printf("%d不是2的幂次方\n",num);
else
	printf("%d是2的%d次方！\n",num,is_pow2(num));
    system("pause");
    return 0;
}





