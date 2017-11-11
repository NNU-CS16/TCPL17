#include<stdio.h> 
int main()
{
	int a,b,c;
	printf("Please Input a,b,c:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b<=c||a+c<=b||b+c<=a)		
		printf("No!\n");
	else
	{
		printf("Yes!\n");
		if(a==c||a==b||b==c)		
		{
			printf("It can be an isoceles triangle!\n");
			if(a==c && a==b)			
				printf("It also can be an equilateral triangle!\n");
			else
				printf("But it can not be an equilateral triangle!\n");
		}
		else
		{
			printf("It can't be an isoceles triangle!\n");
		}
	}
	return 0;
}
