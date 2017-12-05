#include <stdio.h>

int main()
{

	int f1(float);
	int f2(char);
	int f3(float);
	int f4(float);
	int (*pf)(float);
	pf = &f4;
	pf = &f2;
	pf = f3;
	return 0;

}
