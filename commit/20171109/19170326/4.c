#include<stdio.h>

int a(int k)
{
	int i;
	int s=0;
	if(k==0) return 1;
	else
	{
		for(i=1;i<=k;i++)
		{
			s+=a(k-i);
		}
		return s;
	}
}

int Taijie(int n, int k)
{
	int s=0;
	int i;
	if(n>=1&&n<=k)
		return a(n);
	else
	{
		for(i=1;i<=k;i++)
			s+=Taijie(n-i,k);
		return s;
	}
}

int main()
{
	int N,k;
	scanf("%d %d", &N, &k);
	printf("%d\n",Taijie(N,k)%100007);
	return 0;
}
			

