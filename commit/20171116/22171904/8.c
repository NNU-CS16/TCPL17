#include <stdio.h>
#define N 20

int main()
{
	int n;
	printf("请输入n的值: ");
	scanf("%d",&n);
	int a[N][N]={0};
	int direction=1;
	int i,j;
	int x=0,y=0;
	for(i=1;i<=n*n;i++)
	{
		a[x][y]=i;
		switch(direction)
		{
			case 1:if(a[x][y+1]||y==n-1)
					   direction=2;
				break;
			case 2:if(a[x+1][y]||x==n-1)
					   direction=3;
				break;
			case 3:if(a[x][y-1]||y==0)
					   direction=4;
				break;
			case 4:if(a[x-1][y]||x==0)
					   direction=1;
				break;

		}
	
		switch(direction)
		{
			case 1:y++;break;
			case 2:x++;break;
			case 3:y--;break;
			case 4:x--;break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");

	}

}
