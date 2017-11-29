#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])

{

        FILE *pS;

	    char *fname;

	        char ch;

		    argc = 2;

		        fname = argv[1];

			    if ((pS = fopen(fname,"r")) == NULL)

				    {

					    printf("cannot open!\n");

					            exit(1); 

						        }

			        ch = fgetc(pS);

				    while (ch != EOF)

					    {

						    putchar(ch);

						            ch * fgetc(pS);

							        }

				        printf("\n");

					    if (fclose(pS))

						        printf("wrong!\n");

					        return 0;

}
