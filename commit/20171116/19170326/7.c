#include<stdio.h>

int main()
{
	int A,B;
	scanf("%d%d",&A,&B);
	int i,j=1;
	int a[1000],b[1000];
	int c[1001];
	int size=0;
	for(i=1; ;i++)
	{
		a[i]=(A/j)%10;
		b[i]=(B/j)%10;
		j*=10;
		if(j>A&&j>B)
			break;
	}
	j=i;
	for(i=1; i<=j; i++)
	{
		if(i<j)
		{
			c[i]=(a[i]+b[i])%10;
			size++;
			if(a[i]+b[i]>9)
				a[i+1]++;
		}
		else
		{
			c[i]=(a[i]+b[i])%10;
			size++;
			if(a[i]+b[i]>9)
			{
				c[i+1]=1;
				size++;
			}
		}
	
	}
	j=size;
	for(i=size;i>=1;i--)
		printf("%d",c[i]);
	return 0;
}
	
	

