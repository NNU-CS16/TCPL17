#include <stdio.h>

void print_hex(int a);

int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);

	return 0;
}

void print_hex(int a)
{
	int b[100];
	int n,i;
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	for(i=0;a>0;)
	{
	   n=a%16;
	   b[i++]=n;
	   a=a/16;
	}

	int k;
	for(i=i-1;i>=0;i--)
	{
	   k=b[i];
	   printf("%c",hex[k]);
	}

	printf("\n");
}
