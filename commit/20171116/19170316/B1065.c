#include<stdio.h>
int main()
{
int i,m,n,a,b,sum=0;
int couple[100000],join[10000],e[100000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d%d",&a,&b);
	couple[a]=b;
	couple[b]=a;
}
scanf("%d",&m);
for(i=0;i<m;i++)
{
	scanf("%d",&join[i]);
	e[join[i]]=1;
} 
for(i=0;i<m;i++)
if(couple[join[i]]==0 || couple[join[i]]!=0 &&
   e[join[i]]!=0 && e[couple[join[i]]]==0)
sum++;
else
{
	e[join[i]]=0;
	e[couple[join[i]]]=0;
}
printf("%d\n",sum);
for(i=0;i<100000;i++)
	if(e[i]!=0)
	{
		if(sum>1)
			printf("%5d",i);
		else
		{
		printf("%5d\n",i);
		break;
		}
	sum--;
	}
return 0;
}
