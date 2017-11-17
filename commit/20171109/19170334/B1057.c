#include <stdio.h>

int main()
{
	char a[1000],c;
	int i;
	int b[26] = {0};
	int s = 0;
	int m = 0,n = 0;
	for(i = 0; (c = getchar()) != '\n'; i++)
		a[i] = c;
	a[i] = '\0';
	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 'a' + 'A';
		if(a[i] >= 'A' && a[i] <= 'Z')
		b[a[i] - 'A']++;
	}
	for(i = 0; i < 26; i++)
	s += (b[i] * (i + 1));
	while(s / 2 != 0)
	{
		if(s % 2 == 0) m++;
		if(s % 2 == 1) n++;
		s /= 2;
	}
	if(s % 2 == 0) m++;
        if(s % 2 == 1) n++;
	printf("%d %d\n",m,n);
	return 0;
}
