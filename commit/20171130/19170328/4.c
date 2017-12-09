#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};

struct Node *create(int n)
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head -> next = NULL;
    struct Node* shift = NULL;
    head = shift;
    int i,value;
    for (i = 1; i < n ; i++)
    {
        shift = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        shift -> val = value;
        shift = shift ->next;
    }
    return head;
}


struct Node *insert(struct Node *head,int value)
{
    struct Node *newp=(struct Node *)malloc(sizeof(struct Node));
    newp->val=value;
    struct Node *prev,*p;
    prev=NULL;p=head;
    while(p!=NULL)
    {
        if(p->val > value)
            break;
        prev=p; p=p->next;
    }
    newp->next=p;
    p==head ? head=newp : (prev->next=newp);
    return head;
}

void Output(struct Node *head)
{
    struct Node *shift;
    shift = head;
    while(shift!=NULL)
    {
        printf("%d",shift -> val);
        shift = shift -> next;
    }
}

int main()
{
    int value, n;
    //scanf("%d",&value);
    printf("请输入链表的长度n和n个数;\n");
    scanf("%d", &n);
    struct Node *head = create(n);
    printf("请输入你要插入的节点的数;\n");
    head=insert(head,value);
    Output(head);
    return 0;
} 
