#include <stdio.h>

int my_strcmp(const char* str1, const char* str2);

int main()

{

        char str1[50];

	    char str2[50];

	        int a;

		    printf("str1 is:");

		        scanf("%s", str1);

			    printf("str2 is:");

			        scanf("%s", str2);

				    a=my_strcmp(str1,str2);

				        printf("%d",a);

					    return 0;

}

int my_strcmp(const char* str1, const char* str2)

{

        int i = 0;

	    int j = 0;



	        while ((str1[i] -'0') == (str2[j] - '0'))

		        

		            {

				            i++;

					                j++;

							        }

		    if ((str1[i] == '0') && (str2[j] == '\0'))

			       return 0;

		        if (((str1[i] - '0') > (str2[j] - '0')) || (str2[j] =='\0'))

			           return 1;

			    if (((str1[i] - '0') < (str2[j] - '0')) || (str1[i] == '\0'))

				       return -1;

}


