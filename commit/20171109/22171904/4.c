#include <stdio.h>

int k;
int dp[1100]={0};

void step2(int n)
{
	if(n>1)
	{
		step2(n-1);
		int i;
		for(i=(n-k>=0)?(n-k):0;i<n;i++)
			dp[n]=(dp[n]+dp[i]);
	}

}

int main()
{
	
	int n;
	scanf("%d%d",&n,&k);
	dp[0]=1;
	dp[1]=1;

	step2(n);
	printf("%d",dp[n]%100007);

	return 0;
}


