#include<stdio.h>
int main()
{
	int a,x,y,z;
	scanf("%d",&a);
	int i=0;
	for(x=a;x<a+4;x++)
	{
		for(y=a;y<a+4;y++)
		{
			for(z=a;z<a+4;z++)
			{
				if(x!=y&&y!=z&&z!=x)
				{
					printf("%d%d%d ",x,y,z);
					i++;
				}
				if(i%6==0)
					printf("\n");
			}
		}
	}
return 0;
}
					



