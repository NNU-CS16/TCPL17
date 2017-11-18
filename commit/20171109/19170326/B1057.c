#include<stdio.h>
#include<string.h>

int main()
{
	int N=0;
	char str[100000];
	gets(str);
	int i;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			str[i]-=96;
			N+=str[i];
		}
		else if(str[i]>=65&&str[i]<=90)
		{
			str[i]-=64;
			N+=str[i];
		}
	}
	int M;
	int m=0,n=0;
	for(i=0;N!=0;i++)
	{
		M=N%2;
		if(M==0)	
			m++;
		else
			n++;
		N/=2;
	}
	printf("%d %d",m,n);
	return 0;
}
