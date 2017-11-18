#include <stdio.h>
#include <string.h>
#define MAX 1000

int main()
{
	int i,j,temp,x,max,min;
	int a[MAX];
	scanf("%d",&x);
	a[3] = x % 10;
	a[2] = (x - a[3]) / 10% 10;
	a[1] = (x - a[3] - a[2] *10) / 100% 10;
	a[0] = x / 1000;
	if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
		printf("%d - %d = 0000\n",x,x);
		else
		{
			while(x != 6174)
			{
				for(i = 0; i < 4; i++)
				   for(j = 0; j < 4 - i - 1; j++)
				   {
					if(a[j + 1] > a[j])
					{
					   temp = a[j + 1];
					   a[j + 1] = a[j];
					   a[j] = temp;
					}
				   }
				max = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
                                min = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
				x = max - min;
				for(i = 0; i < 4; i++)
				   printf("%d",a[i]);
				printf(" - ");
				for(i = 0;i < 4; i++)
				printf("%d",a[3 - i]);
				printf(" = ");
        			a[3] = x % 10;
        			a[2] = (x - a[3]) / 10% 10;
        			a[1] = (x - a[3] - a[2] *10) / 100% 10;
        			a[0] = x / 1000;
				for(i = 0; i < 4; i++)
				   printf("%d",a[i]);
				printf("\n");
			}
		}
	return 0;
}
