#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000];
	gets(arr);
	int len,i;
	len=strlen(arr);
	char c[ ]={0};
	for(i=0; i<len; i++)
	{
		if(arr[i]>=65&&arr[i]<=90)
			arr[i]+=32;
	}
	for(i=0; i<len; i++)
	{
		if(arr[i]>=97&&arr[i]<=122)
			c[arr[i]]++;
	}
	char max=0,j,n;
	for(j=97; j<=123; j++)
	{
		if(c[j]>max)
		{
			max=c[j];
			n=j;
		}
	}
	printf("%c %d",n,max);
	return 0;
}
