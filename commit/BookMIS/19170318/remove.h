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

Book *rmbname( Book **h1, char *qbname )
{

	Book *shift1 = *h1;
	char answer[ 10 ];
	_Bool flag = 0;
	do
	{
		if ( flag == 0 ) flag = 1;
		else shift1 = shift1 -> next;
		shift1 = srchbname( &shift1, qbname );
		if ( shift1 == NULL ) { printf( "Not found!\n" ); return NULL; }
		printf( "Do U want to remove this book < %s > ? < yes / next >\n", shift1 -> bname );
		scanf( "%s", answer );
	} while ( strcmp( answer, "next" ) == 0 );

	Book *temp = *h1;
	if ( *h1 != shift1 )
	{
		while ( temp -> next != shift1 ) temp = temp -> next;
		temp -> next = shift1 -> next;
	}
	else *h1 = shift1 -> next;

	return *h1;

}

Book *rmauthor( Book **h1, char *qauthor )
{

	Book *shift1 = *h1;
    char answer[ 10 ];
	_Bool flag = 0;
    do
    {
        if ( flag == 0 ) flag = 1;
		else shift1 = shift1 -> next;
        shift1 = srchauthor( &shift1, qauthor );
		if ( shift1 == NULL ) { printf( "Not found!\n" ); return NULL; }
        printf( "Do U want to remove this book < %s > ? < yes / next >\n", shift1 -> bname );
        scanf( "%s", answer );
    } while ( strcmp( answer, "next" ) == 0 );
    
    Book *temp = *h1;
    if ( *h1 != shift1 )
	{
		while ( temp -> next != shift1 ) temp = temp -> next;
		temp -> next = shift1 -> next;
	}
	else *h1 = shift1 -> next;

	return *h1;

}

Book *rmISBN( Book **h1, char *qISBN )
{

	Book *shift1 = srchISBN( h1, qISBN );
	if ( shift1 == NULL ) { printf( "Not found!\n" ); return NULL; }

	Book *temp = *h1;
	if ( temp != shift1 )
	{
		while ( temp -> next != shift1 ) temp = temp -> next;
		temp -> next = shift1 -> next;
	}
	else *h1 = shift1 -> next;

	return *h1;

}
