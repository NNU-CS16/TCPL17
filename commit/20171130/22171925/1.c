#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *construct( int arr[], int size )
{

    struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
    head -> val = arr[0];
    head -> next = NULL;
    struct Node *shift = head;
    int tail = 1;
    while ( tail < size )
    {
        shift -> next = ( struct Node * )malloc( sizeof( struct Node ) );
	shift = shift -> next;
	shift -> val = arr[tail];
	shift -> next = NULL;
	++tail;
    }
	
	return head;

}

int main()
{

    int a[4] = { 0, 1, 2, 3 };
    struct Node *temp = construct( a, 4 );
    while ( temp -> next != NULL ) { printf( "%d ", temp -> val ); temp = temp -> next; }
    printf( "%d\n", temp -> val );
    return 0;
}
