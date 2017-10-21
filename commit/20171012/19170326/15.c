#include<stdio.h>
int main()

{
	int x;
	scanf("%d",&x);
	int a;
	a=x;
	int i=1,b[16];
do
	{
		b[i]=a%2;
		a/=2;
		i++;
	}while(a>0);
	i--;
do
	{
		printf("%d",b[i]);
		i--;
	}while(i>0);
	i++;
	printf("\n");
	int c;
	c=x;
	int d[16];
do
	{
		d[i]=c%8;
		c/=8;
		i++;
	}while(c>0);
	i--;
do
	{
		printf("%d",d[i]);
		i--;
	}while(i>0);
	i++;
	printf("\n");
	int e;
	e=x;
	int f[16];
	char HEX[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
do
	{
		f[i]=e%16;
		e/=16;
		i++;
	}while(e>0);
	i--;
do
	{
		printf("%c",HEX[f[i]]);
		i--;
	}while(i>0);
	printf("\n");
return 0;
}
	
