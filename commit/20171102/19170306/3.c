#include<stdio.h>
int is_pow2(unsigned int);
int main()
{
int n,flag;
scanf("%d",&n);
flag=is_pow2(n);
printf("%d\n",flag);
return 0;
}

int is_pow2(unsigned int n)
{
int i;
if(n==1)return 0;
for(i=1;i<4*sizeof(int);i++)
{
	if ((n&1)==1)
		{
		int j;
		for(j=i;j<4*sizeof(int);j++)
			{
			n=n>>1;
			if(n!=0) return -1;
			}
		return 0;
		}	
n=n>>1;
}
return 0;
}
