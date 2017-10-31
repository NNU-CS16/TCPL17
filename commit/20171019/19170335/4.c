#include<stdio.h>
#include<math.h>
int main()
{
	int n,j,i;
	int m=1;
	float y;
	scanf("%d",&n);
	for(i=1;i<=sqrt(n/2);i++)
	   {
	    y=sqrt(n-i*i);
	    j=0;
	    do
	       j=j+1;
	    while(j!=y && j<n);
	    if(j<n)
	      {
	       printf("%d %d\n",i,j);
	       m=m+1;
	      }
	   }
	if(m=1)
          printf("No Solution\n");
	  
       return 0;

}
	    

	    
