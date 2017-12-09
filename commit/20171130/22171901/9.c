#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
void clear(struct Node* head);
struct Node* create();
int main()
{
    struct Node *head;
    head = create();
    clear(head);
    return 0;
}

struct Node* create()
{
    struct Node *p1,*p2,*p3;
    p1=(struct Node*)malloc(sizeof(struct Node));p1->val=1;
    p2=(struct Node*)malloc(sizeof(struct Node));p2->val=2;
    p3=(struct Node*)malloc(sizeof(struct Node));p3->val=3;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}

void clear(struct Node *head)
{
    struct Node *p;
    if(head==NULL)
     	return;  //链表为空无需处理

    while(head != NULL)
    {
	p=head;
	head = head->next;
	free(p);  //删除链表非首结点元素
    }
    free(head);  //删除链表首结点元素
    head = NULL;
}
