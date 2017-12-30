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

Book *rtrnbname( Book **h1, Book **h2, char *qbname )
{

	Book *shift2 = *h2;
	Book *temp2 = *h2;
    char answer[ 10 ];
	_Bool flag = 0;
    do
    {
        if ( flag == 0 ) flag = 1;
		else shift2 = shift2 -> next;
        shift2 = srchbname( &shift2, qbname );
		if ( shift2 == NULL ) { printf( "Not found!\n" ); return NULL; }
        printf( "Do U return this book < %s > ? < yes / next >\n", shift2 -> bname );
        scanf( "%s", answer );
    } while ( strcmp( answer, "next" ) == 0 );
	if ( temp2 != shift2 )
	{
		while ( temp2 -> next != shift2 ) temp2 = temp2 -> next;
		temp2 -> next = shift2 -> next;
	}
	else *h2 = ( *h2 ) -> next;

	Book *shift1 = *h1;
    if ( *h1 == NULL )
    {
        *h1 = shift2;
        ( *h1 ) -> next = NULL;
        return *h1;
    }
    if ( strcmp( ( *h1 ) -> bname, shift2 -> bname ) < 0 )
    {
        while ( shift1 -> next != NULL && strcmp( shift1 -> next -> bname, shift2 -> bname ) < 0 ) shift1 = shift1 -> next;
        if ( shift1 -> next == NULL )
        {
            shift1 -> next = shift2;
            shift2 -> next = NULL;
        }
        else
        {
            shift2 -> next = shift1 -> next;
            shift1 -> next = shift2;
        }
    }
    else
    {
        shift2 -> next = *h1;
        *h1 = shift2;
    }

    return *h1;

}

Book *rtrnauthor( Book **h1, Book **h2, char *qauthor )
{

	Book *shift2 = *h2;
    Book *temp2 = *h2;
    char answer[ 10 ];
	_Bool flag = 0;
    do
    {
        if ( flag == 0 ) flag = 1;
		else shift2 = shift2 -> next;
        shift2 = srchauthor( &shift2, qauthor );
		if ( shift2 == NULL ) { printf( "Not found!\n" ); return NULL; }
        printf( "Do U return this book < %s > ? < yes / next >\n", shift2 -> bname );
        scanf( "%s", answer );
    } while ( strcmp( answer, "next" ) == 0 );
    if ( temp2 != shift2 )
    {
        while ( temp2 -> next != shift2 ) temp2 = temp2 -> next;
        temp2 -> next = shift2 -> next;
    }
    else *h2 = ( *h2 ) -> next;
    
	Book *shift1 = *h1;
    if ( *h1 == NULL )
    {
        *h1 = shift2;
        ( *h1 ) -> next = NULL;
        return *h1;
    }
    if ( strcmp( ( *h1 ) -> bname, shift2 -> bname ) < 0 )
    {
        while ( shift1 -> next != NULL && strcmp( shift1 -> next -> bname, shift2 -> bname ) < 0 ) shift1 = shift1 -> next;
        if ( shift1 -> next == NULL )
        {
            shift1 -> next = shift2;
            shift2 -> next = NULL;
        }
        else
        {
            shift2 -> next = shift1 -> next;
            shift1 -> next = shift2;
        }
    }
    else
    {
        shift2 -> next = *h1;
        *h1 = shift2;
    }

    return *h1;

}

Book *rtrnISBN( Book **h1, Book **h2, char *qISBN )
{

	Book *shift2 = *h2;
    Book *temp2 = *h2;

	while ( strcmp( shift2 -> ISBN, qISBN ) != 0 ) shift2 = shift2 -> next;
	if ( shift2 == NULL ) { printf( "Not found!\n" ); return NULL; }

    if ( temp2 != shift2 )
    {
        while ( temp2 -> next != shift2 ) temp2 = temp2 -> next;
        temp2 -> next = shift2 -> next;
    }
    else *h2 = ( *h2 ) -> next;

	Book *shift1 = *h1;
    if ( *h1 == NULL )
    {
        *h1 = shift2;
        ( *h1 ) -> next = NULL;
        return *h1;
    }
    if ( strcmp( ( *h1 ) -> bname, shift2 -> bname ) < 0 )
    {
        while ( shift1 -> next != NULL && strcmp( shift1 -> next -> bname, shift2 -> bname ) < 0 ) shift1 = shift1 -> next;
        if ( shift1 -> next == NULL )
        {
            shift1 -> next = shift2;
            shift2 -> next = NULL;
        }
        else
        {
            shift2 -> next = shift1 -> next;
            shift1 -> next = shift2;
        }
    }
    else
    {
        shift2 -> next = *h1;
        *h1 = shift2;
    }

    return *h1;

}
