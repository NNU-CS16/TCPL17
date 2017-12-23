//head: point to the first address of linked list
//q***: the book to search

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

Book *srchISBN( Book **head, char *qISBN )
{

	Book *shift = *head;
	while ( shift != NULL && strcmp( qISBN, shift -> ISBN ) != 0 )
		shift = shift -> next;
	if ( strcmp( qISBN, shift -> ISBN ) == 0 ) return shift;
	return NULL;

}

Book *srchbname( Book **head, char *qbname )
{

	Book *shift = *head;
	int i, flag;
	while ( shift != NULL )
	{
		flag = 0;
		for ( i = 0; i <= strlen( shift -> bname ) - strlen( qbname ); ++i )
		{ 	
			if ( strncmp( qbname, shift -> bname + i, strlen( qbname ) ) == 0 )
			{
				flag = 1;
				break;
			}
		}
		if ( flag == 0 ) shift = shift -> next;
		else break;
	}
	if ( flag == 1 ) return shift;
	return NULL;

}

Book *srchauthor( Book **head, char *qauthor )
{

	Book *shift = *head;
	while ( shift != NULL && strcmp( qauthor, shift -> author ) != 0 )
		shift = shift -> next;
	if ( strcmp( qauthor, shift -> author ) == 0 ) return shift;
	return NULL;

}
