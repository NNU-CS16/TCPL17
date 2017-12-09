#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
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
void clear(struct Node *head)
{
    while(head!=NULL)
        head=deletehead(head);
    free(head);
}
int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->val=1;
    head->next=NULL;
    clear(head);
    return 0;
}
