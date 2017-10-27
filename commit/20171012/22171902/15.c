#include<stdio.h>
int main()
{
	int a,t,i=0;
	int num=[20]={0};
	scanf("%d",&a);
	t=a;
	while(t)
	{
	 num[i++]=t%2;
 	 t/=2;
	}
	for(--i;i>=0;i--)
	 printf("%d",num[i]);
	printf("\n");
	printf("%o\n",a);
	printf("%x\n",a);

	return 0;
}
	
	
