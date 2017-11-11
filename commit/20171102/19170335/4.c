#include<stdio.h>
int count1_in_bin(int n)
{
	int i;
	int m=0;
	for(i=0;i<8;i++)
	{
		if(((n>>i)&1)==1)
		  m=m+1;
        }
	return m;
}
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",count1_in_bin(n));
   return 0;
}

