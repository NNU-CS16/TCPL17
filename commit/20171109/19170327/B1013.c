#include <stdio.h>
#include <math.h>
int screen_prime(int n);
int main()
{
	int i,m,n,count = 0;
	scanf("%d%d",&m,&n);

	for(i = 2;;i++)
	{
		if(screen_prime(i))
		{
			count++;	
			if(m <= count && n>= count)
			{
				if((count-m+1)%10 == 0)
					printf("%d\n",i);
				else if(count != n)
					printf("%d",i);
				else
					printf("%d",i);
			}
		}
		if(n<count)
		{
			break;
		}
	}
	return 0;
}


int screen_prime(int n)
{
	int sqrtc,j;
	sqrtc = (int)sqrt(n);
	for(j = 2;j <= sqrtc;j++)
	{
		if(n%j==0)
			return 0;
	}
	return n;
}

