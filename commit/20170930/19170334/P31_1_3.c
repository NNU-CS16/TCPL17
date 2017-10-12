#include <stdio.h>

int main()

{
	char a='B';
	char b=33;
	char c='0';
	char d='9';
	a=a-'A'+'0';
	b=b*2;
	printf("%c,%c\n",a,b);
	c++,d--;
	printf("%c,%c/n",c,d);
	return 0;
}
