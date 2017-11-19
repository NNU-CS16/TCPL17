#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char c[1000005];
	gets(c);
	int len=strlen(c);
	int N=0;
	for(int i=0;i<len;i++)
		if(tolower(c[i])>='a'&&tolower(c[i])<='z')
			N+=(tolower(c[i])-'a'+1);
	int count0 =0,count1 =0;
	while(N)
	{
	if(N%2)
	count1++;
	else
	count0++;
	N=N/2;
	}
	printf("%d %d",count0 ,count1);
	return 0;
}

