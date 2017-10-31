#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float j;
	printf("please input the number: n(n>3)");
	scanf("%d",&n);
	j = sqrt(n);
	for(i=2;i<j;i++)
		if(n%i==0)
			break;
	if(i<j)
		printf("%d is not prime number\n",n);
	else
		printf("%d is prime number\n",n);
			return 0;
}
	

