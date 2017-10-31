#include<stdio.h>
int main ()
{
	int a[100][200],i,j,n;

	scanf("%d",&n);
	
	for(i=0;i<100;i++)
		for(j=0;j<200;j++)
			a[i][j]=0;
			
	for(i=0;i<n;i++)
	{
		for(j=n-1-i;j<=i+5;j=j+2)
		{
			if(j<n-i)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j+1];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i+5;j++)
		{
			if(a[i][j]==0)
				printf("    ");
			else
				printf("%3d ",a[i][j]);
		}	
    	 printf("\n");		
}
return 0;	
}
