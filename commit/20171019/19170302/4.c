#include<stdio.h>
int main()
{
	int n,x,y;
	int flag=0;
	printf("Please input n(n<=10000):");
	scanf("%d",&n);
	for(x=1;x<=100;x++)
	{
		for(y=x;y<=100;y++)
		{
			if(x*x+y*y==n&&x<y)
			{flag=1;
			printf("%d%d\n",x,y);
			}
		}
	}
                 if(flag=0)
 		 printf("no solution");	
        printf("\n");
        return 0;
}
