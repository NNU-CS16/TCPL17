#include <stdio.h>
int is_pow2(int n);
int main()
{
	int n, result;
        scanf("%d",&n);
	result = is_pow2(n);
        printf("%d\n",result);
	return 0;
}
int is_pow2(int n)
{   
    int i;	
    int flag = 0;
	while (n > 1)
	{
		i = n % 2;
		if (i == 1)
		{
			flag = -1;
			break;
		}
		n = n / 2;
	}
	return flag;
	
}
		


