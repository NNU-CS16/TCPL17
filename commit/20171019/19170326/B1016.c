#include<stdio.h>
int main()
{
	int A,DA,B,DB;
	int str[11];
	int f[11];
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	int i,p=1,k=1,m=0;
	for(i=1;p<=A;i++)
	{
		str[i]=(A/p)%10;
		p*=10;
		if(str[i]==DA)
		{
			m=m+DA*k;
			k*=10;
		}		
	}
	int n=0,q=1,j=1;
	for(i=1;q<=B;i++)
	{
		f[i]=(B/q)%10;
		q*=10;
		if(f[i]==DB)
		{
			n=n+DB*j;
			j*=10;
		}
	}
	printf("%d\n",m+n);
	return 0;
}

