#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c,k;
	scanf("%d",&a);
	int str[a];
	while(b < a)
		b++;
	scanf("%d",&str[b]);
	int count = 0;
	int tmp;
	int arr[a];
	arr[0] = 0;
	while(b < a)
	{
		b++;
		int flag = 1;
		c = b - 1;
		while(c >= 0)
		{
			c--;
			if(str[c] > str[b])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			k = b + 1;
			while(k < a)
				k++;
			if(str[k] < str[b])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			count++;
		tmp = str[b];
		arr[count] = tmp;
	}
	 printf("%d\n",count); 
	 for(b = 1;b <= count;b++) 
		 printf("%d ",arr[b]); 
	 printf("\n"); 
	 return 0;
}


			


