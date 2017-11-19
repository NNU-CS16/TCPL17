#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",is_int_pal(n));
	return 0;
}

int is_int_pal(int n)
{
	int a[64];
	int i;
	int begin = 0;
	int end;
	for(i = 0; ; i++)
	{
		a[i] = n % 10;
		n = n / 10;
		if(n == 0)
		break;
		else
		continue;
	}
	end = i;
	while(begin < end)
	{
		if(a[begin] == a[end])
		return 0;
		else 
		{
			return -1;
			break;
		}
		begin++;
		end--;
	}
}
