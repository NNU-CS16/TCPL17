#include <stdio.h>

int n;

void output(int x)
{

	    int i;

	        if (x!=n)
			    {

				          for (i=0;i<(n-x);i++) printf(" ");
					        for  (i=0;i<(2*x-1);i++) printf("*");
						      printf("\n");

						            output(x+1);

							          for (i=0;i<(n-x);i++) printf(" ");
								        for (i=0;i<(2*x-1);i++) printf("*");
									      printf("\n");

									          }
		    else
			        {

					      for (i=0;i<(2*x-1);i++) printf("*");
					            printf("\n");

						        }

}

int main()
{

	    scanf("%d",&n);

	        output(1);

		    return 0;

}

