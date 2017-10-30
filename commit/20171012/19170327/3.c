#include <stdio.h>

int main()
{

	         int total=0;
		 int n,a,t,i;

		scanf("%d%d",&n,&a);

		t=a;
		for (i=0;i<n;i++)
														                                  {

																				          total+=t;
																					 t=t*10+a; 
																		  }	
	       	printf("%d\n",total);												                                        return 0;

}




