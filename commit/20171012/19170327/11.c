#include <stdio.h>

int main()
{

	    int n,i,j,k;
	        int s=1;

		    scanf("%d",&n);

		        for (i=n;i<=n+3;i++)
				      for (j=n;j<=n+3;j++)
					              for (k=n;k<=n+3;k++)
							                if (i!=j && j!=k && k!=i)
										            if (s<6)
												                {

															              s++;
																                    printf("%d%d%d ",i,j,k);

																		                } else {s=1; printf("%d%d%d\n",i,j,k); }

			    return 0;

}

