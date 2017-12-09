 #include <stdio.h>
 #include <stdlib.h>

 struct Node
 {
    int val;
    struct Node* next;
 };

 struct Node* merge(struct Node* head1,struct Node* head2)
 {
    struct Node *a, *b, *n, *h;
    a = head1;
    b = head2;
    n = NULL;
    while ((a != NULL) && (b != NULL))
    {
        if (a->val > b->val)
        {
            n = b;
            b = b->next;
        }
        else
        {
            n = a;    
            a = a->next;
        }
    }
    while (a != NULL)
    {
	n  = a;
        a = a->next;
    }
    while (b != NULL)
    {
	n  = b;
        b = b->next;
    }
    return n;
 }

 int main()
 {
    struct Node *a, *b, *c;
    a = (struct Node *)malloc(sizeof(struct Node));
    a->val = 103;
    b = (struct Node *)malloc(sizeof(struct Node));
    b->val = 105;
    c = (struct Node *)malloc(sizeof(struct Node));
    c->val=107;
    a -> next = b;
    b -> next = c;
    c -> next =NULL;
    struct Node *x, *y, *z;
    x = (struct Node *)malloc(sizeof(struct Node));
    x->val = 101;
    y = (struct Node *)malloc(sizeof(struct Node));
    y->val = 104;
    z = (struct Node *)malloc(sizeof(struct Node));
    z->val = 109;
    x -> next = y;
    y -> next = z;
    z -> next =NULL;
    struct Node *head1 = a;
    struct Node *head2 = x;
    struct Node *i;
    i = merge(head1, head2);
    while(i != NULL)
    {
        printf("%d\n", i->val);
        i = i -> next;
    }
    return 0;
}
