nclude <stdio.h>
#include <math.h>
int a[5];
void sort(int n);
int main()
{
	int n,max,min;
	scanf("%d",&n);
	sort(n);
	max=a[3]*1000+a[2]*100+a[1]*10+a[0];
	min=a[0]*1000+a[1]*100+a[2]*10+a[3];
	while((max-min)!=6174&&(max-min)!=0)
		{
			printf("%04d - %04d = %04d\n",max,min,max-min);
			sort((max-min));
			max=a[3]*1000+a[2]*100+a[1]*10+a[0];
			min=a[0]*1000+a[1]*100+a[2]*10+a[3];
		}
	printf("%04d - %04d = %04d\n",max,min,max-min);
	return 0;
}

void sort (int n)
{
	int i=0,j;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	for(int k=0;k<3;k++)
	{
		for(i=0;i<3-k;i++)
		{
			if(a[i]>a[i+1])
			{
				j=a[i+1];
				a[i+1]=a[i];
				a[i]=j;
			}
																				                }
        }
}
