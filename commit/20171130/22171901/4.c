#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *insert( struct Node *head, int val )
{

    struct Node *shift;
    shift = head;
    while ( shift -> next != NULL && shift -> next -> val < val ) 
          shift = shift -> next;
    if ( shift -> next = NULL )
    {
	shift -> next = ( struct Node * )malloc( sizeof( struct Node ) );
	shift = shift -> next;
	shift -> val = val;
	shift -> next = NULL;
    }
    else
    {
	struct Node *shift1;
	shift1 = ( struct Node * )malloc( sizeof( struct Node ) );
	shift1 -> val = val;
	shift1 -> next = shift -> next;
	shift -> next = shift1;
    }

    return head;

}

int main()
{

    struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
    head -> val = 1;
    head -> next = NULL;
    head = insert( head, 2 );

    return 0;

}
