#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;

};

struct Node* creat(int M, int N, int O)
{
    struct Node *m, *n, *o;
    m = (struct Node*)malloc(sizeof(struct Node)); m -> val=M;
    n = (struct Node*)malloc(sizeof(struct Node)); n -> val=N;
    o = (struct Node*)malloc(sizeof(struct Node)); o -> val=O;
    m->next = n;
    n->next = o;
    o->next =NULL;
    return m;
}

void scan(struct Node* head)
{
    struct Node* shift;
    for(shift = head; shift !=NULL; shift = shift -> next )
    printf("%d ",shift -> val);  
}

struct Node * insert(struct Node* head, int value)
{
    struct Node* newnode =(struct Node*)malloc(sizeof(struct Node));
    newnode -> val = value;
    struct Node* shift;
    shift = head;
    if(shift -> next != NULL)
    {
     shift = shift -> next;
    }
    shift -> next -> next = newnode;//if (shitf -> next) = node,then error ,but why?
    newnode -> next = NULL;
    return head;
}

int main()
{
    printf("Please input 3 numbers then input another:\n");
    int M,N,O,P;
    scanf("%d%d%d", &M, &N, &O);
    scanf("%d", &P);
    struct Node* head = creat(M,N,O);
    head = insert(head, P);//if{ insert(head, P) ,then Error,but why?

    scan(head);
    return 0;

}
