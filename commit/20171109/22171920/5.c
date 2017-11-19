#include <stdio.h>
#include <string.h>
int p[205][205], a[200], maxn;
void  f(int x)
{
	int i, j;
    for (i=1; i<=x+1; i++)
	{
        for (j=1; j<=200; j++)
			p[x][j]=p[x][j]*2;
		for (j=1; j<=200; j++)
		{
			if (p[x][j]>=10) 
			{
				p[x][j+1]+=p[x][j]/10;
				p[x][j]%=10;
				maxn=j+1;
			}
			if (p[x][j]) maxn=j;
		}
	}
}
int main()
{
    int n,t,i,j;
	memset(p, 0, sizeof(p));
	
    for(i=1; i<=200; i++)
	{
		maxn=0;
		p[i][1]=1;
		memset(a, 0, sizeof(a));
		f(i);
	    p[i][0]=maxn;
		p[i][1]-=2;
	}
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=p[n][0]; i>0; i--)
			printf("%d", p[n][i]);
		printf("\n");
	} 
	return 0;
}

