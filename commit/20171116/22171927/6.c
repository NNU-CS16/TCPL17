#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);
int main()
{
	char str[10];
	int k;
	printf("Please input str[10]:");
	scanf("%s",str);
	printf("Please input k:");
	scanf("%d",&k);
	k_reverse(str, k);
	return 0;
}

void k_reverse(char* str, int k)
{
	int len;
	int n,m,i,j;
	int l;
	len = strlen(str);
	l = len/k;
	for (m = 0; m < l; m++)
	{
		for(i = (m*k),j = (m+1)*k-1; i <= j; i++, j--)
		{
			n = str[i];
			str[i] = str[j];
			str[j] = n;
		}
	}
	printf("%s",str);
}
