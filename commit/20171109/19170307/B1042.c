#include <stdio.h>

int main()
{
	char a[1001],c;
	int i,b[26] = {0},max = 0,point;
	for(i = 0; (c = getchar()) != '\n'; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 'a' + 'A';
		if(a[i] >= 'A' && a[i] <= 'Z')
		b[a[i] - 'A']++;
	}
	for(i = 0; i < 26; i++ )
	{
		if(b[i] > max)
		{
			max = b[i];
			point = i;
		}
	}
	printf("%c %d\n",point + 'a',max);
	return 0;
}
