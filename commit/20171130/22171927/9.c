#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
void clear(struct Node* head);
int main()
{
	struct Node *p1, *p2, *p3;
	p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 101;
	p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 102;
	p3 = (struct Node *)malloc(sizeof(struct Node)); p3->val = 103;
	p1->next = p2; p2->next = p3; p3->next = NULL;
	struct Node *head;
	head = p1;
    clear(head);
	return 0;
}

void clear(struct Node* head)
{
	struct Node *p;
	while (head != NULL)
	{   
		p = head;
		head = head->next;
	   	free(p);
	}
	if (head == NULL)
		printf("NULL\n");

}
		
		
