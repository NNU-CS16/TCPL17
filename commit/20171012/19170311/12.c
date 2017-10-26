#include<stdio.h>
int main(void)
{
	int a,b,min;

	scanf("%d/%d",&a,&b);

	if(a>b)
	min=b;
	else
	min=a;

	int i;
	for(i=min;i>0;i--){
	if(a%i==0 && b%i==0){
	a /= i;b /= i;}
	}
	printf("%d/%d\n",a,b);

	return 0;
}
