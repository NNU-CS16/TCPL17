#include <stdio.h>
#include "head.h"
#include <stdlib.h>
#include <string.h>
Book *Searchbook(Book *head)
{
    char m;
    Book *p = head;
    FILE *fp = fopen("Bookinfo.txt", "r");
    char seek[100];
    printf("a:name\n  b:writer\n  c:ISBN\n");
    scanf("%c", &m);
    while (feof(fp));
        fprintf(fp, "%s %s %s %2f", p -> name, p -> writer, p -> ISBN, p -> price);
    fclose(fp);
    switch(m)
    {
	case'a':
	    scanf("%s", seek);
	    while (p != NULL)
	    {
		for (int i = 0; i <= 50; i++)
		{
		    if (p -> name[i] == seek[i])
			if (strncmp(seek, p -> name, strlen(seek)) == 0)
			{
		            printf("%s %s %s %2f\n", p -> name, p -> writer, p -> ISBN, p -> price);
	                    break;
	                }
                }
                p = p -> next;
            }
            break;
        case'b':
	    scanf("%s", seek);
	    while (p != NULL)
	    {
		for (int j = 0; j <= 20; j++)
		{
		    if (p -> writer[j] == seek[j])
		    {
			if (strncmp(seek, p -> writer, strlen(seek)) == 0)
			{
			    printf("%s %s %s %2f\n", p -> name, p -> writer, p -> ISBN, p -> price);
			    break;
			}
                    }
		}
		p = p -> next;
	    }
            break;
	case'c':
	    scanf("%s", seek);
	    while (p != NULL)
	    {
                if (strcmp(seek, p -> ISBN) == 0)
	            printf("%s %s %s %2f\n", p -> name, p -> writer, p -> ISBN, p -> price);
		p = p -> next;
	    }
	    break;
	default:break;
	}
}


