#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node *insert(struct Node *head, int val)
{
    struct Node *p1,*target;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1->next=target;
    target->next=NULL;
    return p1;
}
void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%X\t%d\t%X\n",p,p->val,p->next);
        p=p->next;
    }
}
struct Node* delete(struct Node *head,int val)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
        if(head->val==val)
        {
              ListNode *newhead=removeElements(head->next,val);
                free(head);
                return newhead;
          }
        else
        {
            head->next=removeElements(head->next,val);
            return head;
          }
}
int main()
{
    int val;
    printf("val:");
    scanf("%d\n",&val);
    struct Node* delete(head,val)
    output(head);  
    return 0;
}
