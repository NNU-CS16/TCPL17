#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k)
{
	int a,b,i,j,temp;
	for(a=0,b=k;b <= strlen(str);)
	{
		for(i = 0,j = b-1; i < b,j > i; i++,j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
		a += k;
		b += k;
	}
}

int main()
{
	char str[10];
	int k;
	scanf("%s%d",str,&k);
	k_reverse(str,k);
	printf("%s\n",str);
	return 0;
}

	  
