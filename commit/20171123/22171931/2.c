    #include <stdio.h>

int bin_insert(int n, int m, int j, int i);

int main ()

{

        int k,n,m,j,i;

	    printf("n,m,j,i:");

	        scanf("%d%d%d%d", &n, &m, &j, &i);

		    k = bin_insert(n,m,j,i);

		        printf("%d", k);

			    return 0;

}

int bin_insert(int n,int m,int j,int i)

{

        int n1[32],m1[i-j+1];

	    int a,b,s;

	        for (a = 0; a < 32; a++)

		        n1[a] = 0;

		    for (a = 0; a < i-j+1; a++)

			    m1[a] = 0;

		      

		        for (a = 0; n > 0; a++)

			        {

					n1[a] = n % 2;

					        n = n/2;

						    }

			    for (a = 0; m > 0; a++)

				    {

					    m1[a] = m%2;

					            m = m/2;

						        }

			        for (a = 0; j <= i; j++)

				        {

					            n1[j] = m1[a];

						            a++;

							        }

				    b = 1;

				        s = 0;

					    for (a = 0; a < 32; a++)

						    {

							        s = s + n1[a] * b;

								        b = b*2;

									    }

					        return s;

}


