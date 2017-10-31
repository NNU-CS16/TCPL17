#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,g=0,k=0,l=0;
	char c;
	int count;
	int a;//行数
	int b;
	int i,j,k1;
	scanf("%d %c",&n,&c);
	count=n;
	a=sqrt((n+1)/2);
	if(n>=0&&n<7)
	printf("%d",n);
	else{
	b=a;
	for(i=1;i<=b;i++)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(k1=1;k1<=2*(b-i+1)-1;k1++)
		{
		printf("%c",c);
		count--;
		}printf("\n");
	}
	for(i=b-1;i>0;i--)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(k1=1;k1<=2*(b-i+1)-1;k1++)
		{
		printf("%c",c);
		count--;
		}
		printf("\n");

return 0;
}		




	
printf("%d",count);
}
return 0;
}

