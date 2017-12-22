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

/*struct book
{
    char bname[ 55 ];
    char author[ 25 ];
    char ISBN[ 10 ];
    double price;
    struct book *next;
};

typedef struct book Book;*/

void menu()
{

	printf( "----Welcome to our E-library----\n" );
	printf( "(l)Have a look at the book list\n" );
	printf( "(b)Borrow one book\n" );
	printf( "(r)Return one book\n" );
	printf( "(u)Update one book\n" );
	printf( "(i)Add one book\n" );
	printf( "(m)Remove one book\n" );
	printf( "(q)Quit\n" );

}

int main()
{

	char cmd, c, cc;
	char qbname[ 60 ];
	char qauthor[ 30 ];
	char qISBN[ 10 ];
	Book *temp = NULL;

	Book *head1 =( Book * )malloc( sizeof( Book ) );
	Book *shift1 = head1;

	Book *head2 =( Book * )malloc( sizeof( Book ) );
	Book *shift2 = head2;

	FILE *fp1, *fp2;
	fp1 = fopen( "library.csv", "r" );
	fp2 = fopen( "return.csv", "r" );

/*
	while ( !EOF ) // To be changed
	{
		fscanf( fp1, "%s%s%s%lf", shift1 -> bname, shift1 -> author, shift1 -> ISBN, &shift1 -> price );
		shift1 -> next = ( Book * )malloc( sizeof( Book ) );
		shift2 = shift1;
		shift1 = shift1 -> next;
	}
	shift2 -> next = NULL;
*/

/*
    while ( !EOF ) // To be changed
    {
        fscanf( fp2, "%s%s%s%lf", shift2 -> bname, shift2 -> author, shift2 -> ISBN, &shift2 -> price );
        shift1 -> next = ( Book * )malloc( sizeof( Book ) );
        shift2 = shift1;
        shift1 = shift1 -> next;
    }
    shift2 -> next = NULL;
*/

	Book *pre = NULL;
	int i = 0, j = 0;
	cc = fgetc( fp1 );
	while ( cc != EOF )
	{
		switch ( i % 3 )
		{
			case 0:
				if ( cc != ',' && cc != '\n' )
				{
					shift1 -> bname[ j ] = cc;
					++j;
				}
				else { ++i; j = 0; }
				break;
			case 1:
				if ( cc != ',' && cc != '\n' )
				{
					shift1 -> author[ j ] = cc;
					++j;
				}
				else { ++i; j = 0; }
				break;
			case 2:
				if ( cc != ',' && cc != '\n' )
				{
					shift1 -> ISBN[ j ] = cc;
					++j;
				}
				else
				{
					++i; j = 0;
					fscanf( fp1, "%lf", &shift1 -> price );
					shift1 -> next = ( Book * )malloc( sizeof( Book ) );
					pre = shift1;
					shift1 = shift1 -> next;
					while ( fgetc( fp1 ) != '\n' );
				}
				break;
		}
		cc = fgetc( fp1 );
	}

	if ( i < 3 ) { free( head1 ); head1 = NULL; }
	else { pre -> next = NULL; free( shift1 ); }

	i = 0; j = 0;
	cc = fgetc( fp2 );
    while ( cc != EOF )
    {
        switch ( i % 3 )
        {
			case 0:
           		if ( cc != ',' && cc != '\n' )
            	{
               		shift2 -> bname[ j ] = cc;
                	++j;
            	}
            	else { ++i; j = 0; }
            	break;
        	case 1:
            	if ( cc != ',' && cc != '\n' )
            	{
            	    shift2 -> author[ j ] = cc;
            	    ++j;
            	}
            	else { ++i; j = 0; }
            	break;
        	case 2:
            	if ( cc != ',' && cc != '\n' )
            	{
            	    shift2 -> ISBN[ j ] = cc;
            	    ++j;
            	}
            	else
				{
					++i; j = 0;
					fscanf( fp2, "%lf", &shift2 -> price );
					shift2 -> next = ( Book * )malloc( sizeof( Book ) );
					pre = shift2;
					shift2 = shift2 -> next;
					while ( fgetc( fp2 ) != '\n' );
				}
            	break;
		}
        cc = fgetc( fp2 );
    }

	if ( i < 3 ) { free( head2 ); head2 = NULL; }
	else { pre -> next = NULL; free( shift2 ); }

	do
	{
		menu();
		cmd = getchar();
		printf( "--------------------------------\n" );
		getchar();
		if ( cmd == 'q' )
		{
			saveAs( head1, "library.csv" );
			saveAs( head2, "return.csv" );
			printf( "Welcome back!\n" );
			break;
		}

		switch ( cmd )
		{
			case 'l': list( head1 ); break;
			case 'b':
				printf( "Please input a book name or author name or ISBN\n" );
				printf( "(b)bookname\n(a)authorname\n(i)ISBN\n" );
				c = getchar(); getchar();
				switch ( c )
				{
					case 'b':
						fgets( qbname, 55, stdin );
						qbname[ strlen( qbname ) - 1 ] = '\0';
						temp = dltbname( &head1, &head2, qbname );
						break;
					case 'a':
						fgets( qauthor, 25, stdin );
						qauthor[ strlen( qauthor ) - 1 ] = '\0';
						temp = dltauthor( &head1, &head2, qauthor );
						break;
					case 'i':
						fgets( qISBN, 10, stdin );
						qISBN[ strlen( qISBN ) - 1 ] = '\0';
						temp = dltISBN( &head1, &head2, qISBN );
						break;
					default: printf( "Command not found!\n" );
				}
				getchar();
				break;
			case 'r':
				printf( "Please input a book name or author name or ISBN\n" );
				printf( "(b)bookname\n(a)authorname\n(i)ISBN\n" );
				c = getchar(); getchar();
				switch ( c )
				{
					case 'b':
						fgets( qbname, 55, stdin );
						qbname[ strlen( qbname ) - 1 ] = '\0';
						temp = rtrnbname( &head1, &head2, qbname );
						break;
					case 'a':
						fgets( qauthor, 25, stdin );
						qbname[ strlen( qauthor ) - 1 ] = '\0';
						temp = rtrnauthor( &head1, &head2, qauthor );
						break;
					case 'i':
						fgets( qISBN, 10, stdin );
						qISBN[ strlen( qISBN ) - 1 ] = '\0';
						temp = rtrnISBN( &head1, &head2, qISBN );
						break;
					default: printf( "Command not found!\n" );
				}
				getchar();
				break;
			case 'u':
				printf( "Please input a book name or author name or ISBN\n" );
                printf( "(b)bookname\n(a)authorname\n(i)ISBN\n" );
                c = getchar(); getchar();
				switch ( c )
                {
                    case 'b':
                        fgets( qbname, 55, stdin );
						qbname[ strlen( qbname ) - 1 ] = '\0';
                        temp = updtbname( &head1, qbname );
                        break;
                    case 'a':
                        fgets( qauthor, 25, stdin );
						qauthor[ strlen( qauthor ) - 1 ] = '\0';
                        temp = updtauthor( &head1, qauthor );
                        break;
                    case 'i':
                        fgets( qISBN, 10, stdin );
						qISBN[ strlen( qISBN ) - 1 ] = '\0';
                        temp = updtISBN( &head1, qISBN );
                        break;
					default: printf( "Command not found!\n" );
                }
				break;
			case 'i':
				temp = insert( &head1 );
				break;
			case 'm':
				printf( "Please input a book name or author name or ISBN\n" );
                printf( "(b)bookname\n(a)authorname\n(i)ISBN\n" );
                c = getchar(); getchar();
                switch ( c )
                {
                    case 'b':
                        fgets( qbname, 55, stdin );
                        qbname[ strlen( qbname ) - 1 ] = '\0';
                        temp = rmbname( &head1, qbname );
                        break;
                    case 'a':
                        fgets( qauthor, 25, stdin );
                        qauthor[ strlen( qauthor ) - 1 ] = '\0';
                        temp = rmauthor( &head1, qauthor );
                        break;
                    case 'i':
                        fgets( qISBN, 10, stdin );
                        qISBN[ strlen( qISBN ) - 1 ] = '\0';
                        temp = rmISBN( &head1, qISBN );
                        break;
					default: printf( "Command not found!\n" );
                }
                getchar();
                break;
			default: printf( "Command not found!\n" );
		}

	} while ( 1 );

	fclose( fp1 );
	fclose( fp2 );

	return 0;

}
