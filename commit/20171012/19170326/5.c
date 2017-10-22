#include<stdio.h>
int main()
{
	int i=1,j,k;
	do
	 {
	  j=1;
	  do
	    {
	     k=j*i;
	     printf("%d*%d=%d ",j,i,k);
	     j=j+1;
	    }while(j<=i);
	 printf("\n");
	 i=i+1;
	 }while(i<=9);
	return 0;
}

	
