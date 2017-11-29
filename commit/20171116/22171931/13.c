#include <stdio.h>



struct student

{

        char id[20];

	    char name[20];

	        int score;

};



int main()

{

        int n, i = 0, j = 0;

	    int a,b;

	        printf("n is:");

		    scanf("%d", &n);

		        struct student stu[n];

			    struct student max;

			        struct student min;

				    for (i = 0; i < n; i++)

					    {

						        scanf ("%s", stu[i].name);

							        scanf ("%s", stu[i].id);

								        scanf("%d", &stu[i].score);  

									    }

				        for (a = 0; a < n ; a++)

					        {

						            for (b = a + 1; b < (n+1); b++)

								        {

									                if(stu[a].score < stu[b].score)

											                {

													                    max = stu[a];

															                    stu[a] = stu[b];

																	                    stu[b] = max;

																			                }

											        }

							        }

					    printf ("%s %s\n", stu[0].name, stu[0].id);

					        printf("%s %s\n", stu[n-1].name, stu[n-1].id); 

						    return 0;

} 


