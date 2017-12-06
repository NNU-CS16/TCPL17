#include <stdio.h>

int main()
{
	long long N;
	scanf("%lld",&N);
	long long result=0;
	for(long long i=1;i<=N;++i)
	{
		int temp=i;
		while(temp %2==0)
		{
			temp /=2;
		}
		result+=temp;
	}
	printf("%lld\n",result);
	return 0;
}
