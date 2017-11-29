#include<stdio.h>
#include<string.h>
void k_reverse(char* str,int k)
{
	int n=strlen(str);
	int s=n/k;
	int i,j;
	for(j=0;j<s;j++)
	{
	for(i=k-1;i>=0;i--)
		printf("%c",str[k*j+i]);
	}
	int m=n%k;
	for(i=0;i<m;i++)
	printf("%c",str[k*s+i]);
}
int main()
{
int k;
char str[100]={"hellow"};
scanf("%d",&k);
char *p=str;
k_reverse(p,k);
return 0;
}
