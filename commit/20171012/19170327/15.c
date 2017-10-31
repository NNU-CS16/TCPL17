#include <stdio.h>

int main()
{

	    int m,n,i=-1;
	        int a[1000];

		    scanf("%d",&n);
		        m=n;

			    while (m/2!=0)
				        {

						       i++;
						              a[i]=m%2;
							             m=m/2;

								         };

			        if (m==1) printf("1");
				    for (;i>=0;i--) printf("%d",a[i]);
				        printf("\n");
					    printf("%o\n",n);
					        printf("%x\n",n);

						    return 0;

}

