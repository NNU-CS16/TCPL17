#include<math.h>
#include<stdio.h>
int main()
{
int x,y,n,a=0;
scanf("%d",&n);
if(n>10000) {printf("wrong number\n");return 0;}
double min=sqrt(n/2),max=sqrt(n);
	for (y=max;y>=min;y--)
		for(x=1;x<=min;x++)
			if(x*x+y*y==n){printf("%d,%d\n",x,y);a=1;}
if (a==0)printf("no solution\n");
return 0;
}
