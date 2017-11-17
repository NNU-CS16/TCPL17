#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0&&n!=6174)
	{
		int a[4];
		a[0]=n%10;
		a[1]=n/10%10;
		a[2]=n/100%10;
		a[3]=n/1000%10;
		int i,j;
		int temp;
		for(j=0;j<3;j++)
		{
			for(i=0;i<3;i++)
			{
				if(a[i]>=a[i+1])
				{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
		}
		int min,max;
		min=a[0]*1000+a[1]*100+a[2]*10+a[3];
		max=a[3]*1000+a[2]*100+a[1]*10+a[0];
		n=max-min;
		int b[4];
		b[0]=n%10;
		b[1]=n/10%10;
		b[2]=n/100%10;
		b[3]=n/1000%10;
		printf("%d%d%d%d-%d%d%d%d=%d%d%d%d\n",a[3],a[2],a[1],a[0],a[0],a[1],a[2],a[3],b[3],b[2],b[1],b[0]);
	}
	return 0;
}
			
