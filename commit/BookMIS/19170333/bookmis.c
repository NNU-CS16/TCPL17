#include <stdio.h>
#include <stdlib.h>
#include "bookmis.h"
int status (void)
{
	int st, code;
	printf ("Please input the number of your status :\n");
    printf ("\n          %s%s%s\n", STAR, STAR, STAR);
    printf ("             | * 1) Student              |   * 2) Manager\n");
    printf ("\n          %s%s%s\n", STAR, STAR, STAR);
	while ((st = scanf ("%d", &code) != 1) || (code < 1 || code > 2))
    {    
		if (st != 1)
			scanf ("%*s");
		printf ("Entry an interge (1 or 2) please.\n");
    }
	return code;
}

int menu1 (void)
{
	int code, st;
    printf ("\n          %s%s%s\n", STAR, STAR, STAR);
    printf ("          Enter the number of your choice :");
    printf ("\n          %s%s\n", MIS, MIS);
    printf ("           * 1) Query book entries   |* 2) Add book entries\n");
    printf ("                                     |\n");
    printf ("          %s%s\n", MIS, MIS);
    printf ("           * 3) Delete book entries  |* 4) Revise book entries\n");
    printf ("                                     |\n");
    printf ("          %s%s\n", MIS, MIS);
    printf ("           * 5) Display book entries |* 6) Statistis\n");
    printf ("                                     |\n");
    printf ("          %s%s\n", MIS, MIS);
    printf ("           * 7) Quit\n");
    printf ("\n          %s%s%s\n", STAR, STAR, STAR);
    while ((st = scanf ("%d", &code)) != 1 || (code < 1 || code > 7))
    {
        if (st != 1)
            scanf ("%*s");
        printf ("Entry an interge from 1 to 7 please.\n");
    }
   return code;
}

int menu2 (void)
{
	int st, code;
	printf ("\n          %s%s%s\n", STAR, STAR, STAR);
    printf ("          Enter the number of your choice :");
    printf ("\n          %s%s\n", MIS, MIS);
    printf ("           * 1) Query book entries   |* 2) Display book entries\n");
    printf ("\n          %s%s\n", MIS, MIS);
    printf ("           * 3) Statistics           |* 4) Quit\n");
    while ((st = scanf ("%d", &code)) != 1 ||
    		(code < 1 || code > 4))
	{
		if (st != 1)
			scanf ("%*s");
		printf ("Entry an interge from 1 to 4 please.\n");
	}	
		return code;
}

void student (void)
{
	int code;
	NODE* head = (NODE*)malloc (sizeof (NODE));
	while (code = menu2 () != 4)
		switch(code)
		{
			case 1: Query ();
					break;
			case 2: Indicition ();
					break;
			case 3: Statistics ();
					break;
			default: break;
		}
	return; 
}

void manger (void)
{
	int code;
	NODE* head = (NODE*)malloc (sizeof (NODE));
    while ((code = menu1 ()) != 7)
        switch (code)
        {
            case 1: Query ();
                    break;
            case 2: Append ();
                    break;
            case 3: Delete ();
                    break;
            case 4: Revise ();
                    break;
            case 5: Indicition ();
                    break;
            case 6: Statistics ();
                    break;
            default: break;
        }
	return;
}

int revise_menu ()
{
	int st, code;
	printf ("you can choose one figure to revise :\n");
	printf ("\n          %s%s%s\n", STAR, STAR, STAR);
	printf ("                 1) name     |      2) writer\n"
	        "                 3) price    |      4) qiut \n");
	printf ("\n          %s%s%s\n", STAR, STAR, STAR);
	while ((st = scanf ("%d", &code)) != 1 ||
    		(code < 1 || code > 4))
	{
		if (st != 1)
			scanf ("%*s");
		printf ("Entry an interge from 1 to 4 please.\n");
	}	
	return code;	
}

int query_menu()
{
	int code, st;
	printf ("\n\n                 **********Welcome to the query system!*************\n\n\n");
	printf ("Next you should choose one figure"
	" so that the condition can be inquired :\n");
	printf ("\n          %s%s%s\n", STAR, STAR, STAR);
	printf ("                 1) bookname    |    2) author\n"
	        "                 3) ISBN        |    4) quit\n");
	printf ("\n          %s%s%s\n", STAR, STAR, STAR);
	while ((st = scanf ("%d", &code)) != 1 ||
    		(code < 1 || code > 4))
	{
		if (st != 1)
			scanf ("%*s");
		printf ("Entry an interge from 1 to 4 please.\n");
	}
	return code;	
}
   
