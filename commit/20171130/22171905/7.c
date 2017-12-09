#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int val;
	struct Node *next;
};

struct Node *reverse( struct Node *head )
{

	struct Node *temp = head -> next;
	struct Node *shift1 = head;
	struct Node *shift2 = head -> next;
	while ( temp != NULL )
	{
										
		temp = shift2 -> next;
		shift2 -> next = shift1;
		shift1 = shift2;
		shift2 = temp;
	}
	head -> next = NULL;

	return shift1 -> next;

}

int main()
{

	struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
	struct Node *shift = head;
	for ( int i = 0; i < 4; i++ ) 
	{
		shift -> val = i;
		shift -> next = ( struct Node * )malloc( sizeof( struct Node ) );
		shift = shift -> next;
	}
	shift -> next = NULL;
	head = reverse( head );
	shift = head;
	while ( shift -> next != NULL ) { printf( "%d ", shift -> val ); shift = shift -> next; }
	printf( "%d\n", shift -> val );

	return 0;

}
