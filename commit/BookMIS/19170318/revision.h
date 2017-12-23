//head: point to the first address of linked list
//q***: the book to revise

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

Book *updtbname( Book **head, char *qbname )
{

	Book *shift = *head;
	char answer[ 10 ];
	_Bool flag = 0;
	do
	{
		if ( flag == 0 ) flag = 1;
		else shift = shift -> next;
		shift = srchbname( &shift, qbname );
		if ( shift == NULL ) { printf( "Not found!\n" ); return NULL; }
		printf( "Do U want this book < %s > ? < yes / next >\n", shift -> bname );
		scanf( "%s", answer );
	} while ( strcmp( answer, "next" ) == 0 );

	getchar();
	printf( "Update for books\n" );
	printf( "Book name: " );
	fgets( shift -> bname, 55, stdin );
	shift -> bname[ strlen( shift -> bname ) - 1 ] = '\0';
	printf( "The author name: " );
	fgets( shift -> author, 25, stdin );
	shift -> author[ strlen( shift -> author ) - 1 ] = '\0';
	printf( "The price: " );
	scanf( "%lf", &shift -> price );
	getchar();

	Book *temp = *head;
    if ( *head != shift )
    {
        while ( temp -> next != shift ) temp = temp -> next;
        temp -> next = shift -> next;
    }
    else *head = shift -> next;

	temp = *head;
    if ( *head == NULL )
    {
        *head = shift;
        ( *head ) -> next = NULL;
        return *head;
    }
    if ( strcmp( ( *head ) -> bname, shift -> bname ) < 0 )
    {
        while ( temp -> next != NULL && strcmp( temp -> next -> bname, shift -> bname ) < 0 ) temp = temp -> next;
        if ( temp -> next == NULL )
        {
            temp -> next = shift;
            shift -> next = NULL;
        }
        else
        {
            shift -> next = temp -> next;
            temp -> next = shift;
        }
    }
    else
    {
        shift -> next = *head;
        *head = shift;
    }

    return shift;

}

Book *updtauthor( Book **head, char *qauthor )
{

	Book *shift = *head;
	char answer[ 10 ];
	_Bool flag = 0;
	do
	{
		if ( flag == 0 ) flag = 1;
		else shift = shift -> next;
		shift = srchauthor( &shift, qauthor );
		if ( shift == NULL ) { printf( "Not found!\n" ); return NULL; }
		printf( "Do U want this book < %s > or next ? < yes / next >\n", shift -> bname );
	scanf( "%s", answer );

	} while ( strcmp( answer, "next" ) == 0 );
 
	getchar();
    printf( "Update for books\n" );
    printf( "Book name: " );
    fgets( shift -> bname, 55, stdin );
    shift -> bname[ strlen( shift -> bname ) - 1 ] = '\0';
    printf( "The author name: " );
    fgets( shift -> author, 25, stdin );
    shift -> author[ strlen( shift -> author ) - 1 ] = '\0';
    printf( "The price: " );
    scanf( "%lf", &shift -> price );
    getchar();

	Book *temp = *head;
    if ( *head != shift )
    {
        while ( temp -> next != shift ) temp = temp -> next;
        temp -> next = shift -> next;
    }
    else *head = shift -> next;

    temp = *head;
    if ( *head == NULL )
    {
        *head = shift;
        ( *head ) -> next = NULL;
        return *head;
    }
    if ( strcmp( ( *head ) -> bname, shift -> bname ) < 0 )
    {
        while ( temp -> next != NULL && strcmp( temp -> next -> bname, shift -> bname ) < 0 ) temp = temp -> next;
        if ( temp -> next == NULL )
        {
            temp -> next = shift;
            shift -> next = NULL;
        }
        else
        {
            shift -> next = temp -> next;
            temp -> next = shift;
        }
    }
    else
    {
        shift -> next = *head;
        *head = shift;
    }

    return shift;

}

Book *updtISBN( Book **head, char *qISBN )
{

	Book *shift = srchISBN( head, qISBN );
	if ( shift == NULL ) { printf( "Not found!\n" ); return NULL; }

	//getchar();
    printf( "Update for books\n" );
    printf( "Book name: " );
    fgets( shift -> bname, 55, stdin );
    shift -> bname[ strlen( shift -> bname ) - 1 ] = '\0';
    printf( "The author name: " );
    fgets( shift -> author, 25, stdin );
    shift -> author[ strlen( shift -> author ) - 1 ] = '\0';
    printf( "The price: " );
    scanf( "%lf", &shift -> price );
    getchar();

	Book *temp = *head;
    if ( *head != shift )
    {
        while ( temp -> next != shift ) temp = temp -> next;
        temp -> next = shift -> next;
    }
    else *head = shift -> next;

    temp = *head;
    if ( *head == NULL )
    {
        *head = shift;
        ( *head ) -> next = NULL;
        return *head;
    }
    if ( strcmp( ( *head ) -> bname, shift -> bname ) < 0 )
    {
        while ( temp -> next != NULL && strcmp( temp -> next -> bname, shift -> bname ) < 0 ) temp = temp -> next;
        if ( temp -> next == NULL )
        {
            temp -> next = shift;
            shift -> next = NULL;
        }
        else
        {
            shift -> next = temp -> next;
            temp -> next = shift;
        }
    }
    else
    {
        shift -> next = *head;
        *head = shift;
    }

    return shift;

}
