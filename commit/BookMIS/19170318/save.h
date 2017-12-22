#ifndef hhh
#define hhh

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "search.h"
#include "insert.h"
#include "return.h"
#include "revision.h"
#include "delete.h"
#include "remove.h"
#include "list.h"
#include "save.h"
*/

struct book
{
    char bname[ 55 ];
    char author[ 25 ];
    char ISBN[ 10 ];
    double price;
    struct book *next;
};

typedef struct book Book;

#endif

void saveAs( Book *head, char *filename )
{

	Book *shift = head;
	FILE *fp;
	fp = fopen( filename, "w" );
	while ( shift != NULL )
	{
		fprintf( fp, "%s,%s,%s,%.2f\n", shift -> bname, shift -> author, shift -> ISBN, shift -> price );
		shift = shift -> next;
	}
	fclose( fp );

}
