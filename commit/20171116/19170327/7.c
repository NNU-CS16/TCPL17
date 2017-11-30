#include <stdio.h>
#include <string.h>

int main()
{
	int A,B;
	int i = 1,j = 1;
	int a[1000],b[1000],c[1001];
	int size = 0;
	for(i = 1; ;i++)
	{
		a[i] = (A/j)%10;
		b[i] = (B/j)%10;
		j *= 10;
		if(j > A&&j > B)
			break;
	}
	j = i;
	i = 1;
	while(i <= j)

	{
		i++;
		if(i < j)
		{
			c[i] = (a[i]+b[i])%10;
			size++;
			if(a[i]+b[i] > 9)
				a[i+1]++;
		}
		else
		{
			c[i] = (a[i]+b[i])%10;
			size++;
			if(a[i]+b[i] > 9)
			{
				c[i+1] = 1;
				size++;
			}
		}
	}
	j = size;
	for(i = size;i >= 1; i--)
		printf("%d",c[i]);
	return 0;
}


			
