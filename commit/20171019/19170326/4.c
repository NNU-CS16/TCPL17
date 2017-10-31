#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	 int x,y,N;
	 scanf("%d",&N);
	 int m;
	 m=sqrt(N);
	 int i=0;

	for(x=1;x<=m;x++)
	{
	for(y=m;y<=N;y++)
	{
	    if(x*x+y*y==N)
	    {
		    printf("%d %d\n",x,y);
	    	    i++;
	    }
	}
	}
	if(i==0)
		printf("No Solution");
		    return 0;
}
