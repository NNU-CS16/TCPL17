//head: point to the first address of linked list
//q***: the book to delete

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

Book *dltbname( Book **h1, Book **h2, char *qbname )
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
		printf( "Do U want this book < %s > ? < yes / next >\n", shift1 -> bname );
		scanf( "%s", answer );
	} while ( strcmp( answer, "next" ) == 0 );

	Book *temp = *h1;
	if ( *h1 != shift1 )
	{
		while ( temp -> next != shift1 ) temp = temp -> next;
		temp -> next = shift1 -> next;
	}
	else *h1 = shift1 -> next;

	Book *shift2 = *h2;
	if ( *h2 == NULL )
	{
		*h2 = shift1;
		( *h2 ) -> next = NULL;
		return *h1;
	}
	if ( strcmp( ( *h2 ) -> bname, shift1 -> bname ) < 0 )
	{
		while ( shift2 -> next != NULL && strcmp( shift2 -> next -> bname, shift1 -> bname ) < 0 ) shift2 = shift2 -> next;
		if ( shift2 -> next == NULL )
		{
			shift2 -> next = shift1;
			shift1 -> next = NULL;
		}
		else
		{
			shift1 -> next = shift2 -> next;
			shift2 -> next = shift1;
		}
	}
	else
	{
		shift1 -> next = *h2;
		*h2 = shift1;
	}

	return *h1;

}

Book *dltauthor( Book **h1, Book **h2, char *qauthor )
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
        printf( "Do U want this book < %s > ? < yes / next >\n", shift1 -> bname );
        scanf( "%s", answer );
    } while ( strcmp( answer, "next" ) == 0 );
    
    Book *temp = *h1;
    if ( *h1 != shift1 )
	{
		while ( temp -> next != shift1 ) temp = temp -> next;
		temp -> next = shift1 -> next;
	}
	else *h1 = shift1 -> next;

	Book *shift2 = *h2;
    if ( *h2 == NULL )
    {
        *h2 = shift1;
        ( *h2 ) -> next = NULL;
        return *h1;
    }
    if ( strcmp( ( *h2 ) -> bname, shift1 -> bname ) < 0 )
    {
        while ( shift2 -> next != NULL && strcmp( shift2 -> next -> bname, shift1 -> bname ) < 0 ) shift2 = shift2 -> next;
        if ( shift2 -> next == NULL )
        {
            shift2 -> next = shift1;
            shift1 -> next = NULL;
        }
        else
        {
            shift1 -> next = shift2 -> next;
            shift2 -> next = shift1;
        }
    }
    else
    {
		shift1 -> next = *h2;
		*h2 = shift1;
	}

	return *h1;

}

Book *dltISBN( Book **h1, Book **h2, char *qISBN )
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

	Book *shift2 = *h2;
    if ( *h2 == NULL )
    {
        *h2 = shift1;
        ( *h2 ) -> next = NULL;
        return *h1;
    }
    if ( strcmp( ( *h2 ) -> bname, shift1 -> bname ) < 0 )
    {
        while ( shift2 -> next != NULL && strcmp( shift2 -> next -> bname, shift1 -> bname ) < 0 ) shift2 = shift2 -> next;
        if ( shift2 -> next == NULL )
        {
            shift2 -> next = shift1;
            shift1 -> next = NULL;
        }
        else
        {
            shift1 -> next = shift2 -> next;
            shift2 -> next = shift1;
        }
    }
    else
    {
		shift1 -> next = *h2;
		*h2 = shift1;
	}

	return *h1;

}
