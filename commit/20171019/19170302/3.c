#include<stdio.h>

int main()
{
	int n,m,i,j,k=0;
	char a;
	printf("n=:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("fu ");
		n=-n;
	}
	int mask=1;
	i=n;
	while(i>9)
	{
		i=i/10;
	        mask=mask*10;
	}
	
	while(n>0)
	{      m=n/mask;
		n=n%mask;
		mask=mask/10;
		switch(m)
		{
			case 0:printf("ling ");break;
			case 1:printf("yi ");break;
		        case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
		}
	}
		
	
	
	printf("\n");
	return 0;
}


		
