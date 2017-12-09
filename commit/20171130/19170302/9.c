#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int val;
        struct Node *next;
};

struct Node *creat();
struct Node *deletehead(struct Node *head);
struct Node *deletelist(struct Node *head);


int main()
{
        struct Node *head=creat();
        head=deletelist(head);
        return 0;
}

struct Node *creat()
{
        struct Node *p1,*p2,*p3;
        p1=(struct Node *)malloc(sizeof(struct Node));p1->val=101;
        p2=(struct Node *)malloc(sizeof(struct Node));p2->val=103;
        p3=(struct Node *)malloc(sizeof(struct Node));p3->val=105;
        p1->next=p2; p2->next=p3; p3->next=NULL;

        return p1;
}

struct Node *deletelist(struct Node *head)
{
        while(head!=NULL)
                head=deletehead(head);
        return NULL;
}

struct Node *deletehead(struct Node *head)
{
        struct Node *p;
        if(head==NULL)
                return NULL;
        p=head;
        head=head->next;
        free(p);
        return head;
}

