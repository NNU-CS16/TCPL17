#include<stdio.h>
int main()
{
	char arr[100][100];
	int str[100];
	int i,j,n;
	for(j=0;;j++)
	{
		for(i=0;;i++)
		{
			scanf("%c",&arr[j][i]);
			if(arr[j][i]=='\n'||arr[j][i]==' ')
				break;
		}
		str[j]=i-1;
		if(arr[j][i]=='\n')
			break;
	}
	n=j--;
	for(j=n;j>=0;j--)
	{
		for(i=0;i<=str[j];i++)
		{
			printf("%c",arr[j][i]);
		}
		if(j>0)
			printf(" ");
	}
	return 0;
}

