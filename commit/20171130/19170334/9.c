#include <stdio.h>//删除所有结点并释放内存空间
#include <stdlib.h>

struct Node
{    
    int val;    
    struct Node* next;
};

void clear(struct Node* head);

int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	shift = head;
	shift -> val = 0;
	shift -> next = NULL;
	for (int i = 1; i <= 5; i++)
	{
		shift -> next = ( struct Node * )malloc( sizeof( struct Node ) );
		shift = shift -> next;
		shift -> val = i;
	}
	shift -> next = NULL;
	clear(head);
	free(head);
	return 0;
}

void clear(struct Node* head)
{
	struct Node* shift = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	shift = head;
	temp = shift;
	while(shift != NULL)
	{
		shift = shift -> next;
		free(temp);
		temp = shift;
	}
	free(temp);
	free(shift);
	shift = NULL;
}
