#include <stdio.h>//将两个链表进行有序（非降序）归并到一个新的链表
#include <stdlib.h>

struct Node
{    
    int val;    
    struct Node* next;
};

struct Node* merge(struct Node* head1, struct Node* head2); 

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
	for (int i = 1; i < 5; i++)
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
	if(merge(head1, head2) -> next == NULL) printf("NULL\n");
	else
	{
		for(shift = merge(head1, head2) -> next; shift != NULL; shift = shift -> next)
		{
			printf("%d ", shift -> val);
		}
		printf("\n");
	}
	return 0;
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node *head = ( struct Node * )malloc( sizeof( struct Node ) );
	struct Node *temp = head;
	head1 = head1 -> next;
	head2 = head2 -> next;
	temp -> next = ( struct Node * )malloc( sizeof( struct Node ) );
    temp = temp -> next;
	while ( 1 )
	{
		if ( head1 -> val < head2 -> val )
		{
			temp -> val = head1 -> val;
			if ( head1 -> next == NULL ) break;
			head1 = head1 -> next;
		}
		else
		{
			temp -> val = head2 -> val;
			if ( head2 -> next == NULL ) break;
			head2 = head2 -> next;
		}
		temp -> next = ( struct Node * )malloc( sizeof( struct Node ) );
		temp = temp -> next;
	}
	if ( head1 -> next == NULL ) temp -> next = head2;
	else temp -> next = head1;
	return head;
}
