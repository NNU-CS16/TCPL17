#include <stdio.h>

void my_strcpy(char* dest,const char* src);

int main()

{

        char dest[100];

	    char src[50];

	        scanf("%s", src);

		    my_strcpy(dest,src);

		        return 0;

}

void my_strcpy(char* dest,const char* src)

{

        int i = 0;

	    int j = 0;

	        while (src[j] != '\0')

		        {

			            dest[i] = src[j];

				            i++;

					            j++;

						        }

		    printf("%s", dest);

}
