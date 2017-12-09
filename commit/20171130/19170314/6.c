#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int val;
     struct Node *next;
};
struct Node* delete(struct Node* head,int val)
{
    struct Node *prev,*p;
    prev=NULL;
    p=head;
    while(p!=NULL)
    {
        if(p->val==val)
 	
	    break;
            prev=p;
	    p=p->next;
    }
    if(p==NULL)
        return head;
    if(p==head)
        head=head->next;
    else
        prev->next=p->next;
     free(p);
     return head;
}
int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->val=1;
    head->next=NULL;
    head=delete(head,1);
    return 0;
}           
