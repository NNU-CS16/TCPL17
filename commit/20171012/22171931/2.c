#include <stdio.h>
int main()
{
	int i=0,count=0;
	for(i=1;i<=97;i+=3)
	{
		count+=i*(i+1)*(i+2);
	}
	printf(":%d\n",count);
	return 0;
}
