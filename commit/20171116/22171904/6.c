#include <stdio.h>
#include <string.h>

void k_reverse(char* str,int k)
{
	int len;
	int i,j,n,m,l;
	len=strlen(str);
	l=len/k;
	for(m=0;m<l;m++)
	{
		for(i=(m*k),j=(m+1)*k-1;i<=j;i++,j--)
		{
			n=str[i];
			str[i]=str[j];
			str[j]=n;
		}

	}
	printf("%s",str);
}



int main()
{
	int k;
	char str[100];
	scanf("%s",str);
	scanf("%d",&k);
	k_reverse(str,k);
	printf("\n");
}
