#include<stdio.h>
int main()
{ 
	char a;
	int b;
	float c,d;
	scanf("%f,%d,%c,%f",&c,&b,&a,&d);
	printf("%c,%d,%.2f,%.2f",a,b,c,d);
	return 0;
}
