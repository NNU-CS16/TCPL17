#include<stdio.h>
#include<math.h>
int main()
{
	int k;
	scanf("%d",&k);
	if(k<0)
		printf("fu ");
	k=fabs(k);
	char *z[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int m;
	int n=1,i,f[16];

	if(k>=0&&k<=9)
	{
		m=k%10;
		printf("%s",z[m]);
	}
	else
	{
		for(i=1;n<=k;i++)
		{
			f[i]=(k/n)%10;
			n*=10;
		}
		i--;
		for(;i>1;i--)
		{
			printf("%s",z[f[i]]);
			printf(" ");
		}
		printf("%s",z[f[1]]);
	}
	

	return 0;
}
		

