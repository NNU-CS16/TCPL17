#include<stdio.h>

int Jishu(int N)
{
	if(N==1)
		return 1;
	if(N==2)
		return 2;
	return Jishu(N-1)+Jishu(N-2);
}

int main()
{
int N,m;
scanf("%d",&N);
m=Jishu(N)%100007;
printf("%d",m);
return 0;
}
