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
#include "refer.h"
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

void list( Book *head )
{

	Book *shift = head;
	while ( shift != NULL )
	{
		printf( "%s\n%s\n%s\n%.2f\n\n", shift -> bname, shift -> author, shift -> ISBN, shift -> price );
		shift = shift -> next;
	}

}
