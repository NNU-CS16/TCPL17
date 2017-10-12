#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("a = %d,b = %d\n",a ,b);
	/*swap a and b*/
	int temp;
	temp = b;
	b = a;
	a = temp;
	/*swap a and b*/
printf("a = %d,b = %d",a,b);
return 0;
}
