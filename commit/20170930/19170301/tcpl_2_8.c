#include <stdio.h>
unsigned rightrot(unsigned x, int n);
int m;
int main()
{
	    int a,b;
	     printf("a=");
	     scanf("%d",&a);
             b=a;
	 m=1;
			    while ( (a>>=1) !=0)
				            m++;
			        printf("final=%d\n", rightrot(b, 4));
}

unsigned rightrot(unsigned x, int n)
{
	    int i,j;
	        i=x>>n;
		 j=x&(~(~0<<n));
		        x=(j<<(m-n))|i;
			    return x;
}

