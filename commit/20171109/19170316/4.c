#include<stdio.h>
#include<math.h>
int Jishu(int N,int K)
{
	int s=0,i;
	if(N<=K)
		return pow(2,N-1);
	if(N>K)
		for(i=1;i<=K;i++)
			{s=s+Jishu(N-i,K);}
		return s;
}

int main()
{
int N,K,m;
scanf("%d%d",&N,&K);
m=Jishu(N,K)%10007;
printf("%d",m);
return 0;
}
