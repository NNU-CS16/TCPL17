#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};

struct Node *creat1() 
{
	struct Node *p1,*p2,*p3;
	p1 = (struct Node *)malloc(sizeof(struct Node));
	p1 -> val = 101; 
	p2 = (struct Node *)malloc(sizeof(struct Node));
	p2 -> val = 103;
	p3 = (struct Node *)malloc(sizeof(struct Node));
	p3 -> val = 105;
	p1 -> next = p2;
	p2 -> next = p3;
	p3 -> next = NULL;  
	return p1;
}

struct Node *insert(struct Node *head,int val) 
{
	struct Node *m=(struct Node *)malloc(sizeof(struct Node)); 
	struct Node *n=(struct Node *)malloc(sizeof(struct Node)); 
	for (m = head; m -> next != NULL; m = m -> next)
	n -> val = val;
	m -> next = n;
	n -> next = NULL;
	return head;
}
void output(struct Node *head)
{
	struct Node *p;
	for (p = head; p != NULL; )
	{
		printf("%d", p -> val);
		p = p -> next;
	}
	printf("\n");
}

int main()
{
	int val;
	scanf ("%d", &val);
	struct Node *head = creat1( );
        head = insert(head,val); 	
	output(head);
	return 0;
}

	


