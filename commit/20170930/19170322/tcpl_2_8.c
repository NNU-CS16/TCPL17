#include <stdio.h>
#include <math.h>

int a=0;
unsigned rightrot(unsigned m,int n)
{ 
	  return (m&~(0<<n))<<(a-n)|(m>>n);
}

int main()
{
	  unsigned m=63;
	    int n=3;
	      do
	      {   a++;  }
	        while(pow(2,a)<=m);
	        printf("%u\n",rightrot(m,n));

	        return 0;
}
