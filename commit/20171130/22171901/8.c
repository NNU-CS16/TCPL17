#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node* merge(struct Node* head1, struct Node* head2)
{	
    struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
    struct Node *p = head;	
    head1 = head1 -> next; 
    head2 = head2 -> next; 
    p -> next = ( struct Node * )malloc( sizeof( struct Node ) );
    p = p -> next;
    while( 1 )
    {
	if ( head1 -> val < head2 -> val ) 
	{
		p -> val = head1 -> val;
		if ( head1 -> next == NULL ) 
			break; 
		head1 = head1 -> next; 
	}
	else
	{
		p -> val = head2 -> val;
		if ( head2 -> next == NULL ) 
			break; 
		head2 = head2 -> next; 
	}
	p -> next = ( struct Node * )malloc( sizeof( struct Node ) ); 
	p = p -> next;
    }

    if ( head1 -> next == NULL )
	p -> next = head2;
    else
   	p -> next = head1;
    return head;
}
int main()
{
    struct Node* head1 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* head2 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* shift1 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* shift2 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* shift = (struct Node*)malloc(sizeof(struct Node)); 
    shift1 = head1; 
    shift2 = head2; 
    shift1 -> val = 0; 
    shift2 -> val = 0; 
    shift1 -> next = NULL; 
    shift2 -> next = NULL;
    int i;
    for (i = 1; i < 5; i++)
    {
	shift1 -> next = ( struct Node * )malloc( sizeof( struct Node ) ); 
	shift2 -> next = ( struct Node * )malloc( sizeof( struct Node ) ); 
	shift1 = shift1 -> next; 
	shift2 = shift2 -> next; 
	shift1 -> val = i; 
	shift2 -> val = i + 2;
    }
    shift1 -> next = NULL; 
    shift2 -> next = NULL; 	
    if(merge(head1, head2) -> next == NULL) 
    	printf("NULL\n"); 
    else 
    {
	shift = merge(head1, head2) -> next;
	while(shift != NULL)
		shift = shift -> next;
	{
		printf("%d", shift -> val);
	}
		printf("\n");
    }
    return 0;
}

