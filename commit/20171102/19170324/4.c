#include <stdio.h>

int count1_in_bin(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",count1_in_bin(n));

	
}

int count1_in_bin(int n)
{
	int a,i;
	for(i=0,a=n;a>0;)
	{
	   if((a&1)==1)
	   {
	     i++;
	     n=(n>>1);
	     a=n;
	   }
	   else
	   {
	     n=(n>>1);
	     a=n;
	   }
	}

	return i;
}
