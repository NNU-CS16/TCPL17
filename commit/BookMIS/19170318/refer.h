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

int rfrb( Book **head )
{

	int sum = 0;
	Book *shift = *head;
	while ( shift != NULL ) { ++sum; shift = shift -> next; }
	return sum;

}

int rfra( Book **head )
{

	char a[ 100010 ][ 25 ];
	int sum = 0, i, flag;
	Book *shift = *head;
	while ( shift != NULL )
	{
		flag = 1;
		for ( i = 1; i <= sum; ++i )
			if ( strcmp( shift -> author, a[ i ] ) == 0 )
			{ flag = 0; break; }
		if ( flag == 1 ) { ++sum; strcpy( a[ sum ], shift -> author ); }
		shift = shift -> next;
	}
	return sum;

}

void rfrm( Book **head )
{

	Book *shift = *head;
	char a[ 100010 ][ 25 ];
	int b[ 100010 ] = { 0 };
	int sum = 0, i, flag, max = 0, m;
	while ( shift != NULL )
	{
		flag = 1;
		for ( i = 1; i <= sum; ++i )
			if ( strcmp( shift -> author, a[ i ] ) == 0 )
			{ flag = 0; ++b[ i ]; break; }
		if ( flag == 1 ) { ++sum; strcpy( a[ sum ], shift -> author ); ++b[ sum ]; }
		shift = shift -> next;
	}
	for ( i = 1; i <= sum; ++i )
		if ( b[ i ] > max ) m = i;
	printf( "The author who has the most book is %s.\n", a[ m ] );

}

void rfrh( Book **head )
{

	Book *shift = *head;
	char a[ 25 ];
	double max = 0;
	while ( shift != NULL )
	{
		if ( shift -> price > max )
		{
			max = shift -> price;
			strcpy( a, shift -> bname );
		}
		shift = shift -> next;
	}
	printf( "The most expensive book is %s.\n", a );

}

void rfrl( Book **head )
{

	Book *shift = *head;
    char a[ 25 ];
    double min = 65535;
    while ( shift != NULL )
    {
        if ( shift -> price < min )
        {
            min = shift -> price;
            strcpy( a, shift -> bname );
        }
        shift = shift -> next;
    }
    printf( "The cheapest book is %s.\n", a );

}
