#include <stdio.h>
int main()
{
	int num;
	int hun,ten,one;
	scanf("%d",&num);
	hun=num/100;
	ten=num/10%10;
	one=num%10;

	if(one)
		printf("%d",one);
	if(ten)
		printf("%d",ten);
	printf("%d",hun);
	return 0;
}
