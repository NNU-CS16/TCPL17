#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *insert(struct Node *head, int val);
void output(struct Node *head);

int main( )
{
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->val = 1;
    p1->next = NULL;
    insert(p1 , 2);
    output(p1);
    return 0;
}

struct Node *insert(struct Node *head, int val)
{
    struct Node *p = NULL;
    struct Node *prev = NULL;
    p = head;
    while(p != NULL)
    {
	prev = p;
	p = p->next;
    }
    p=(struct Node *)malloc(sizeof(struct Node));
    prev->next = p;
    p->val = val;
    p->next = NULL;
    return head;
}

void output(struct Node* head)
{
    struct Node *p = head;
    while(p != NULL)
    {
	printf("%x %d %x\n" , p , p->val , p->next);
	p = p->next;
    }
}

