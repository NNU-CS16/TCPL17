//head: point to the first address of linked list
//p***: the book to insert

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

Book *insert( Book **head )
{

	Book *shift = ( Book * )malloc( sizeof( Book ) );
	Book *temp = NULL;
	do
	{
		printf( "Please input ISBN: " );
		fgets( shift -> ISBN, 10, stdin );
		shift -> ISBN[ strlen( shift -> ISBN ) - 1 ] = '\0';
		temp = srchISBN( head, shift -> ISBN );
		if ( temp != NULL ) printf( "This ISBN has already exist!\nPlease try again.\n" );
	} while ( temp != NULL );

	printf( "Please input the book name: " );
	fgets( shift -> bname, 55, stdin );
	shift -> bname[ strlen( shift -> bname ) - 1 ] = '\0';
	printf( "Please input the author: " );
	fgets( shift -> author, 25, stdin );
	shift -> author[ strlen( shift -> author ) - 1 ] = '\0';
	printf( "Please input the price: " );
	scanf( "%lf", &shift -> price );
	getchar();
	//search for the place to insert
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
