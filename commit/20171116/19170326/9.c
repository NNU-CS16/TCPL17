#include<stdio.h>
#include<string.h>
int main()
{
	char a[ ][15]={"nanjing","wuxi","changzhou","shuzhou","xuzhou"};
	char b[15];
	int i,j,k;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4-i; j++)
		{
			k=strcmp(a[j],a[j+1]);
			if(k>0)
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}
	}
	for(i=0; i<5; i++)
		puts(a[i]);
	return 0;
}

