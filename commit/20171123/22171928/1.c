#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
printf("please give me a number:");
scanf("%d",&a);
	if(a % 2 == 1)
	{
	b= a;
	}
	else
	{
	b= a/2;
	}
printf("the answer is :%d",b);
    return 0;
}
